# Write a program that, given a list of values and a list of names, generates a dictionary containing the same data
        # The order of the elements should be in the same order in each list

names = ['greg', 'sam', 'jeb']
values = [1,4,5]
i = 0
a = {}
for name in names:
        a[name] = values[i]
        i += 1

print(f'{a = }')