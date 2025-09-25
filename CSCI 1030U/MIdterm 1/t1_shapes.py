def draw_parallelogram1(n, m):
    o = n +1
    for i in range(m):
        if i < m:
            print(" "*o,"*"*n)
        else:
            print("*"*n)
        o -= 1
draw_parallelogram1(5,7)