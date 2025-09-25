# 03a - Loops

# print(range(10))
# range(0, 10)

# print(list(range(10)))
# [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

# print(list(range(5,10)))
# [5, 6, 7, 8, 9]

# print(list(range(5,25,6)))
# [5, 11, 17, 23]

# print(list(range(100,2,-9)))
# [100, 91, 82, 73, 64, 55, 46, 37, 28, 19, 10]

# print(list(range(101,2,-9)))
# [101, 92, 83, 74, 65, 56, 47, 38, 29, 20, 11]

# infinite loop (x is always less than 10)

# x=0
# while x<10:
#     print(x)
#     x -= 1

print('for loop over a string:')
for letter in 'CSCI1030U':
    print(letter)

# Exercise 03a.1

import math

x = 2.0
num_terms = 100
estimate = 0.0

for n in range(num_terms):
    term = x ** n / math.factorial(n)
    estimate += term

print(f'{estimate = }')

# Hackers' Corner

(n**2 for n in [1,2,3,4,5])
(n for n in range(5,15,3))

# Challenge 03a.1

x = 2.0
num_terms = 50
sin_estimate = 0.0
end_point = num_terms*2
counter = 1
for m in range(1,end_point,+2):
    if(counter % 2) == 0:
        term = x ** m / math.factorial(m)
        sin_estimate -= term
    else:
        term = x ** m / math.factorial(m)
        sin_estimate += term
    counter += 1

print(f'{sin_estimate = }')

# Challenge 03a.2


