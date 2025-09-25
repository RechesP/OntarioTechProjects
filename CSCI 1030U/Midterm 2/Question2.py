import math
def math3(x, n, max_n):
    sum = 0
    for i in range(n, max_n+1):
        term = (math.pow(-1,i))*(math.pow(x,(2*i+1)))/(2*i+1)
        sum += term
    return (math.pi/2)-sum

print(f'{math3(0.0, n = 0, max_n = 20) = }')
print(f'{math3(0.5, n = 0, max_n = 20) = }')

# solved 02/11/2023 @ 20:38
def math3(x, n, max_n):
    if n == 0:
        return (math.pi/2) - (math3(x, n + 1, max_n)  + ((math.pow(-1,n))*(math.pow(x,(2*n+1)))/(2*n+1)))
    if n != max_n:
        return math3(x, n + 1, max_n) + ((math.pow(-1,n))*(math.pow(x,(2*n+1)))/(2*n+1))
    return ((math.pow(-1,n))*(math.pow(x,(2*n+1)))/(2*n+1))

print(f'{math3(0.0, n = 0, max_n = 20) = }')
print(f'{math3(0.5, n = 0, max_n = 20) = }')

