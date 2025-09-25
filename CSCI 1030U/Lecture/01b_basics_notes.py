name = 'Reches'
# to toggle comments on and off press ctr + /
# name = input('What is your name?')
print(f'Hello {name} !')
greeting = 'Hello '+ name+ ' !'
print(greeting)
print('Hello', name, '!', sep = '|', end = 'END\n') # Sep changes the seperator, end changes what happenns the end of string. \n new line 
print("next line")

print(f'Hello ther, {name}. I  said {greeting} before, this is different.')
print(f'9 + 9 = {9+9}')

class_average = 71.5 # <- snake_case common in python, C++ CamelCase: ClassAverage

print('name =',name)
print(f'{name =}')
name_type = type(name)
print(f'{name_type = }')

# coding exercise 01b.2

import turtle
# really old library existed before python was a thing, meant for new people to get the hang of things
# '.' means part of

window = turtle.Screen()

yertle = turtle.Turtle()

yertle.pendown()

yertle.forward(50)
yertle.right(90)
yertle.forward(60)
yertle.right(90)
yertle.forward(70)
yertle.right(90)
yertle.forward(80)
yertle.right(90)
yertle.forward(90)
yertle.right(90)
yertle.forward(100)
yertle.right(90)
yertle.forward(110)
yertle.right(90)
yertle.forward(120)


window.mainloop()