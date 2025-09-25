def is_prime(n):
    factor = 0
    for i in range(1,n+1):
        if n/i == n//i:
            factor += 1
    if factor == 2 or n == 1:
        return True
    return False

# print(f'{is_prime(1) = }')
# print(f'{is_prime(4) = }')
# print(f'{is_prime(6) = }')
# print(f'{is_prime(7) = }')

def filter_primes(elements):
    # base case
    if elements == []:
        return []
    # recursive case
    if is_prime(elements[0]):
        return [elements[0]] + (filter_primes(elements[1:]))
    else:
        return (filter_primes(elements[1:]))
    
print(f'filter_primes(range(20)): {filter_primes([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,8,19,20])}')
# output:  filter_primes(range(20)): [1, 2, 3, 5, 7, 11, 13, 17, 19]

print(f'filter_primes(range(100,200)): {filter_primes([100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200])}')
# output:  filter_primes(range(100,200)): [101, 103, 107, 109, 113, 127,
#          131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191,
#          193, 197, 199]