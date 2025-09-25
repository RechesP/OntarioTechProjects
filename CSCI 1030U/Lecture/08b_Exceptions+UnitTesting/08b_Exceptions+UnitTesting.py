# 08b - Exceptions and Testing

# Coding Exercise 08b.1
def print_reciprocals(list):
    for n in list:
        try:
            print(f'{1/n}')
        except ZeroDivisionError as error:
            # TODO: handle this properly
            print(f'Division by Zero when calculating 1/n')

print_reciprocals([5,4,3,2,1,0]) # ZeroDivisionError: division by zero
print('All done reciprocating')

# coding challinge 08b.1
class TooYoungToVote(Exception):
    pass

def can_vote(age):
    try:
        if age < 18:
            raise TooYoungToVote
        print(f'You are {age} years old, and can vote')
    except TooYoungToVote as error:
        print(f'You are {age} years old, and are too young to vote')

can_vote(int(input("How old are you?\n")))

age = int(input("How old are you?\n"))
if age < 18:
    raise TooYoungToVote('You need to be 18 or older to vote, sorry!')