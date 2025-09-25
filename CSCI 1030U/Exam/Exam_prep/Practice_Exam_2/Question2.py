def get_factors(n):
    list = []
    for i in range(1,n+1):
        if n%i == 0:
            list.append(i)
    return list

print(f'Factors of 12: {get_factors(12)}')
# output: Factors of 12: [1, 2, 3, 4, 6, 12]

print(f'Factors of 20: {get_factors(20)}')
# output: Factors of 20: [1, 2, 4, 5, 10, 20]

print(f'Factors of 100: {get_factors(100)}')
# output: [1, 2, 4, 5, 10, 20, 25, 50, 100]