# def filter_rec(op, values):
#     filtered = []
#     for value in values:
#         if op(value) == True:
#             filtered.append(value)
#     return filtered

def filter_rec(op, values):
    if len(values) == 0:
        return []
    if op(values[0]):
        return [values[0]] + (filter_rec(op, values[1:]))
    else:
        return (filter_rec(op, values[1:]))

print(f'{filter_rec(lambda x: x > 80.0, [64.5, 87.0, 55.5, 94.0, 71.5, 46.0, 100.0])}')
# expected output: [87.0, 94.0, 100.0]

print(f'{filter_rec(lambda x: (x % 2) == 0, [1,2,3,4,5,6])}')
# expected output: [2, 4, 6]