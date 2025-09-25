print('question 1')
def reverse_rec(string):
    if len(string) < 1:
        return string
    
    return reverse_rec(string[1:]) + string[0]

print(f'{reverse_rec("Reches Pasternak") = }')

print('\nquestion 2')
def palindrom_rec(string):
    if len(string) < 2:
        return True
    if string[0] != string[len(string)-1]:
        return False
    
    return palindrom_rec(string[1:len(string)-1])

print(f'{palindrom_rec("CSCI 1030U") = }')
print(f'{palindrom_rec("racecar") = }')

print('\nquestion 3')
class Product:
    # constructor
    def __init__(self, name, price, weight):
        self.name = name
        self.price = price
        self.weight = weight
    # shipping cost
    def get_shipping_cost(self):
        return self.weight*10
    # tax
    def get_tax(self):
        return self.price*0.13
    # total cost
    def get_total_cost(self):
        return self.price + self.get_shipping_cost() + self.get_tax()
    
razor = Product("Electric Razor", 49.99, 0.25)
home_gym = Product("Home Gym", 879.99, 115.0)

print(f'Total cost of {razor.name}: {razor.get_total_cost():0.2f}')
print(f'Total cost of {home_gym.name}: {home_gym.get_total_cost():0.2f}')

print('\nquestion 4')
class Student_Entry:
    # constructor
    def __init__(self, name, sid):
        self.labs = 0.0
        self.assignments = 0.0
        self.midterm = 0.0
        self.final = 0.0
        self.name = name
        self.sid = sid

    def get_average (self):
        return self.labs + self.assignments + self.midterm*.3 + self.final*.4
    
    def letter_grade(self):
        mark = self.get_average()
        if mark < 50.0:
            return 'F'
        elif mark < 60.0:
            return 'D'
        elif mark < 70.0:
            return 'C'
        elif mark < 80.0:
            return 'B'
        else:
            return 'A'
        
    def compare_grade(self, other_student):
        if self.get_average() > other_student.get_average():
            return self.get_average() - other_student.get_average()
        elif self.get_average() < other_student.get_average():
            return other_student.get_average() - self.get_average()
        else:
            return 0
        
bsmith = Student_Entry("Bob Smith", "1000001")
bsmith.labs = 9.0
bsmith.assignments = 17.0
bsmith.midterm = 57.5
bsmith.final = 60.0
print(f'Bob Smith: {bsmith.letter_grade()}')

sjones = Student_Entry("Sally Jones", "1000002")
sjones.labs = 9.5
sjones.assignments = 19.5
sjones.midterm = 81.0
sjones.final = 74.5
print(f'Sally Jones: {sjones.letter_grade()}')

print('\nquestion 5')
class key_not_found(Exception):
    pass
class Dictionary:
    def __init__(self):
        self.keys = []
    
    def set(self, key, value):
        self.keys.append((key, value))
    
    def get(self,key_in):
        for key, value in self.keys:
            if key == key_in:
                return value
        raise key_not_found(f'key not found: {key_in}')
            
    def __str__(self) -> str:
        result = '['
        for key, value in self.keys:
            if len(result) == 1:
                result += f'({key}, {value})'
            else:
                result += f', ({key}, {value})'
        result += ']'
        return result

products = Dictionary()
products.set('RTX3060', 329.99)
products.set('RTX3070', 499.99)
products.set('RTX3080', 1499.99)
products.set('RTX3090', 1999.99)
print(f'products = {products}')
print(f'RTX3090 = {products.get("RTX3090")}')

print('\nquestion 6')
import math
def math1(x, n, max_n):
    sum = 0.0
    for i in range(n,max_n + 1):
        term = math.pow(-1, i) * math.pow(x, i) / math.factorial(i)
        sum += term
    return sum

print(f'{math1(0.0, n = 0, max_n = 10) = }')
print(f'{math1(0.5, n = 0, max_n = 10) = }')

print("\nquestion 7")
import math
def math2(x,n,max_n):
    sum = 0
    for i in range(n, max_n + 1):
        term = (2 * math.pow(-1, i) * math.pow(x, 2*i + 1))/(math.sqrt(math.pi)*(2*i + 1)*math.factorial(i))
        sum += term
    return sum

print(f'{math2(0.0, n = 0, max_n = 10) = }')
print(f'{math2(0.5, n = 0, max_n = 10) = }')