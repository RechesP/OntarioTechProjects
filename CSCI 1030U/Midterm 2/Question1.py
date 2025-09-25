def higher_order1(values, op):
    min = values[0]
    for value in values:
        if min > value:
            min = value
    return op(min)
            
        
def times_two(x):
   return x * 2
print(f'{higher_order1([2,1,3], times_two) = }')
# higher_order1([2,1,3], times_two) = 2
print(f'{higher_order1([6,-3,2], lambda x: x ** 2) = }')
# higher_order1([6,-3,2], lambda x: x ** 2) = 9