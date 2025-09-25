def are_equal(list1, list2):
    if len(list1) != len(list2):
        return False
    matching = 0
    for i in range(len(list1)):
        for j in range(len(list2)):
            if list1[i] == list2[j]:
                matching += 1
                break
    if matching == len(list1):
        return True
    return False

print(f'are_equal([1,2,3], [3,1,2]): {are_equal([1,2,3], [3,1,2])}')
# are_equal([1,2,3], [3,1,2]): True

print(f'are_equal([1,2,3], [4,1,3]): {are_equal([1,2,3], [4,1,3])}')
# are_equal([1,2,3], [4,1,3]): False

print(f'are_equal([1,8,15], [1,15,8]): {are_equal([1,8,15], [1,15,8])}')
# are_equal([1,8,15], [1,15,8]): True