# Write some code that takes a list of integer point numbers, and prints the average of all of the even numbers in the list

integer_point_numbers = [1,2,3,4,5,6,7,8,9,10]
numbers_sum = 0
positive_counter = 0
for n in integer_point_numbers:
    if (int(n) % 2) == 0:
        numbers_sum += n
        positive_counter += 1

print(f'{numbers_sum / positive_counter  = }')