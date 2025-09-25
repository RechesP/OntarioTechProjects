
x = 2.5
n = 0
while n < x:
    if round(n) ** 2 == x:
        square_root = n
    elif round(n) ** 2 < x:
        n += 0.1
    elif round(n) ** 2 > x:
        n -= 0.1
    
print(f'{square_root = }')