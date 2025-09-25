import math

x = 2.0
num_terms = 50
estimate = 0.0
end_point = num_terms*2
counter = 1
for n in range(1,end_point,+2):
    if(counter % 2) == 0:
        term = x ** n / math.factorial(n)
        estimate -= term
    else:
        term = x ** n / math.factorial(n)
        estimate += term
    counter += 1

print(f'{estimate = }')