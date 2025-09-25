def zip_product(list1, list2):
    if len(list1) != len(list2):
        return "invalid"
    products = []
    for n in range(len(list1)):
        product = list1[n]*list2[n]
        products.append(product)
    return products

print(f"{zip_product([1, 0, -1, 3], [4, -8, 20, 7, 0]) = }")