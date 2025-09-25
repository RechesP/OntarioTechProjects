# CSCI Test 1 prep

# Question	1
# Create a function (drawSquare) that, for any positive integer n, prints an nxn square made of ‘*’ symbols.

def drawSquare(n):
    stars = "*"
    for m in range(0,n):
        print(f"{stars*n}")
    # print("\n")

drawSquare(4)

# Question	2
# Create a function (drawTriangle) that, given any positive integer n, prints an nxn triangle made of ‘*’ symbols.

def drawTriangle(n):
    stars = "*"
    for m in range(1,n+1):
        print(f"{stars*m}")
    # print("\n")

drawTriangle(4)

# Question	3
# Create a function (drawTriangle2) that, given any positive integer n, prints an upside-down nxn triangle made of ‘*’ symbols.

def drawTriangle2(n):
    stars = "*"
    for m in range(n,0,-1):
        print(f"{stars*m}")
    # print("\n")

drawTriangle2(4)

# Question	4
# Create a function (jumpMaximum) that, given any list of integers, returns a list with the same elements as a list,
# except that the first element has been swapped with the maximum element in list.

def jumpMaximum(integers):
    max = integers[0]
    first = integers[0]
    for n in integers:
        if n > max:
            max = n
            integers[0] = max
    for m in range(1,len(integers)):
        if integers[m] == max:
            integers[m] = first
    return integers

print(f"{jumpMaximum([1,2,3,4])}")

# Question	5
# Create a function (doubleList) that, given any list of floating point numbers list, returns a list where every
# element of the output list corresponds to the element at the same position in list, but doubled (times two).

def doubleList(list):
    for i in range(len(list)):
        list[i] *= 2
    return list

print(f"{doubleList([5,8,3,21,7,4,14])}")

# Question	6
# Create a function (sublistInRange) that, given a list of floating point numbers, list, and two numbers (min
# and max), returns a list (or modify list) where the elements of the output list corresponds to the elements of list
# that are greater than or equal to min and less than or equal to max

def sublistInRange(given, min, max):
    toRemove = []
    for n in given:
        if n < min or n > max:
            toRemove.append(n)
    for n in toRemove:
        given.remove(n)
    return given

print(f"{sublistInRange([1,2,3,4,5], 2, 4)}")
# print(f"{sublistInRange([5, 8, 3, 21, 7, 4, 14], 4, 14)}")  

# Question	7
# Write a function (drawParallelogram) that takes a single argument, n, and draws a parallelogram with height n and width n.

def drawParallelogram(n):
    for i in range(n):
        if i == 0:
            print("*"*n)
        else:    
            print(" "*(i-1), "*"*n)

drawParallelogram(7)

# Question 8
# Write a function (countLessThan) that takes a number (max) and a list of numbers (list), and returns all the
# numbers in list that are strictly less than (<) max.

def countLessThan(list, max):
    count = 0
    for n in list:
        if n < max:
            count += 1
    return count

list = [7,21,4,19,6,31,16,20,11]
max = 2
print(f'how many values in {list} < {max}?\n {countLessThan(list, max)}')

# Question	9
# Write a function that takes two lists, and returns True if the first list is a reordering of the same elements as the second list, 
# and False otherwise

def isReordering(list1, list2):
    match = 0
    if len(list1) != len(list2):
        return False
    for n in list1:
        for m in list2:
            if n == m and list1.count(n) == list2.count(m):
                match += 1
    for n in list1:
        if list1.count(n) > 1:
            match -= list1.count(n) - 1
    if match == len(list1):
        return True
    return False

print(f"{isReordering([4,1,2,3,2,2,2],[1,2,3,4,2,2,2])}")
# print(f"{isReordering([5,8,3,21],[5,21,8])}")

# Question	10
# Write a function that takes two lists, and returns True if the first list is the reverse of the same elements in the second list, and False otherwise.

def isReverse(list1, list2):
    if len(list1) != len(list2):
        return False
    j = 1
    match = 0
    for i in range(0,len(list1)):
        if list1[i] == list2[0 - j]:
            match += 1
        j += 1
    if match == len(list1):
        return True
    return False

print(f"{isReverse([4,3,2,1],[1,2,3,4])}")

# Write a code that takes a list of items and a list of values and sorts it into a dictionar, 
# then takes the subtotal of all the values, finds the how much tax (13%) would be placed on it, and then finds a final total.

def cashier(items, cost):
    subtotal = 0
    for i in range(0,len(items)):
        item = {
            'item' : items[i],
            'cost' : cost[i],
        }
        subtotal += item["cost"]
        print(f"{item['item']}          ${format(item['cost'],'.2f')}")
    print(f"Subtotal              ${subtotal}")
    print(f"HST 13%                ${format(subtotal*0.13,'.2f')}")
    print(f"Total                 ${format(subtotal+ (subtotal*0.13),'.2f')}")
    
items = ["Cheese       ", "Crackers      ", "Wine         ", "Prosciutto   ", "Artisen Board"]
cost = [13.99, 6.99, 29.95, 10.50, 45.60]

cashier(items, cost)

# pre midterm practice with TA

dictionary = {'one': 1,'two': 2,'three': 3,'four': 4}
other = dict()

other['key'] = 'val'
print(other)

for key, val in dictionary.items():
    if dictionary[key] == 3:
        print(f'{dictionary[key]}')

