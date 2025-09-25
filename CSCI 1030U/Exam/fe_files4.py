class NoSuchCategoryError (Exception):
    pass

def get_average_classic_rating(filename):
    with open(filename, 'r') as text:
        categories = text.readline()
        keys = categories.split(',')
        # print(keys)
        classics = []
        ratings_sum = 0
        for line in text:
            attributes = line.split(',')
            books = {
                keys[0]: attributes[0],
                keys[1]: attributes[1],
                keys[2]: attributes[2],
                keys[3]: attributes[3],
                keys[4]: attributes[4],
                keys[5]: attributes[5],
                keys[6]: attributes[6],
            }
            if books[keys[4]] == 'Classic':
                classics.append(books)
                ratings_sum += float(books[keys[5]])
        if len(classics) == 0:
            raise NoSuchCategoryError
        return round((ratings_sum / len(classics)),1)

print(f'{get_average_classic_rating("data.csv") = }')