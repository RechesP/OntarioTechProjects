# Question 1

def sum_of_squares(min, max):
    if min == max:
        return max*max
    return min*min + sum_of_squares(min+1, max)

print(f'sum_of_squares(1,10): {sum_of_squares(1,10)}')
# output: sum_of_squares(1,10): 385

print(f'sum_of_squares(1,5): {sum_of_squares(1,5)}')
# output: sum_of_squares(1,5): 55