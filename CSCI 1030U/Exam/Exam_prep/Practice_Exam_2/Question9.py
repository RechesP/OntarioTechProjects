def towers_of_hanoi(n, start, end, temp):
    if n < 1:
        return 0

    count = towers_of_hanoi(n - 1, start, temp, end)
    
    # print('Move 1 ring from', start, 'to', end) # count this line only
    count += 1

    count += towers_of_hanoi(n - 1, temp, end, start)
    return count

print(f'{towers_of_hanoi(1, 1, 2, 3) = }')
print(f'{towers_of_hanoi(2, 1, 2, 3) = }')
print(f'{towers_of_hanoi(3, 1, 2, 3) = }')
print(f'{towers_of_hanoi(4, 1, 2, 3) = }')
print(f'{towers_of_hanoi(5, 1, 2, 3) = }')
print(f'{towers_of_hanoi(6, 1, 2, 3) = }')
print(f'{towers_of_hanoi(7, 1, 2, 3) = }')
print(f'{towers_of_hanoi(8, 1, 2, 3) = }')

'''
best guess:  (2^n)-1
n   prints
----------
1   1
2   3
3   7
4   15
5   31
6   63
7   127
8   255
'''