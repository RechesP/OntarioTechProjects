def sum_dc(values):
    if len(values) == 0:
        return 0
    if len(values) == 1:
        return values[0]
    
    mid = len(values)//2
    left = sum_dc(values[:mid])
    right = sum_dc(values[mid:])
    return left + right

print(f'{sum_dc([106,5,-3,17,-21,39]) = }')
# expected output: 143

print(f'{sum_dc([1,2,3,4,5]) = }')
# expected output: 15

print(f'{sum_dc([8,14,2,-1,7]) = }')
# expected output: 30