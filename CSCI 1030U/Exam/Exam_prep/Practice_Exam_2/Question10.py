def create_summary(input_filename, output_filename):
    items = []
    list = []
    with open(input_filename, 'r') as text:
        for line in text:
            items_info = line.split(',')
            price = items_info[3].split('\n')
            item = {
                'item_num': items_info[0],
                'item': items_info[1],
                'size': items_info[2],
                'cost': float(price[0]),
            }
            items.append(item)
    cheapest_product = items[0]
    if cheapest_product['cost'] > (items[1]['cost']):
        cheapest_product = items[1]
    if cheapest_product['cost'] > (items[2]['cost']):
        cheapest_product = items[2]
    if cheapest_product['cost'] > (items[3]['cost']):
        cheapest_product = items[3]
    
    costliest_product = items[0]
    if costliest_product['cost'] < (items[1]['cost']):
        costliest_product = items[1]
    if costliest_product['cost'] < (items[2]['cost']):
        costliest_product = items[2]
    if costliest_product['cost'] < (items[3]['cost']):
        costliest_product = items[3]

    sum = 0
    for item in items:
        sum += item['cost']
    average_price = sum/len(items)

    summary = {
        "cheapest_product": cheapest_product['item'],
        "costliest_product": costliest_product['item'],
        "average_price": average_price,
    }

    import json
    with open (output_filename, 'w') as text:
        json.dump(summary, text)

create_summary('input_data.txt','results.json')