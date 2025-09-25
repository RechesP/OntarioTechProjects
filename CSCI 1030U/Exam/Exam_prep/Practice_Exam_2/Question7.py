def dc_find(list, find):
    if len(list) == 0:
        return False
    if len(list) == 1:
        return find == list[0]

    first_half = list[0:len(list)//2]
    second_half = list[len(list)//2:]

    result1 = dc_find(first_half, find)
    result2 = dc_find(second_half, find)

    return result1 or result2

print(f'dc_find([1,13,5,7,9,15], 8) == {dc_find([1,13,5,7,9,15], 8)}')
# output: dc_find([1,13,5,7,9,15], 8) == False

print(f'dc_find([1,13,5,7,9,15], 13) == {dc_find([1,13,5,7,9,15], 13)}')
# output: dc_find([1,13,5,7,9,15], 13) == True