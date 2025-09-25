def get_powers_of_2(n):
    list = []
    for i in range(0,n+1):
        list.append(pow(2,i))
    return list

def get_powers_of_2(n):
    # base case
    if n == 0:
        return [pow(2,n)]
    # recursive call
    return (get_powers_of_2(n-1)) + [pow(2,n)]

print(f'2^0 .. 2^4: {get_powers_of_2(4)}')
# output: [1, 2, 4, 8, 16]

print(f'2^0 .. 2^10: {get_powers_of_2(10)}')
# output: [1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024]