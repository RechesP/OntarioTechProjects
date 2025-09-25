# Question 1
def get_word_size(word):
    if word == "":
        return 0
    
    return 1 + get_word_size(word[1:])

print(f'{get_word_size("a") = }')
print(f'{get_word_size("car") = }')
print(f'{get_word_size("university") = }')
print(f'{get_word_size("honour") = }')

def process_sentence(sentence, process_word):
    words = sentence.split(' ')
    list = []
    for word in words:
        list.append(process_word(word))
    return list

print(f'{process_sentence("the quick brown fox jumped over the lazy dog", get_word_size)}')

# Question 2
def process_game(filename, handler):
    file = open(filename, 'r')
    text = file.read()
    # print(text)
    handler(text)

def print_game(game_state):
        for i in range(9,82,9):
            print(game_state[i-9:i])

process_game('Exam/Exam_prep/Practice_Exam_1/game.txt', print_game)

# Question 3
class NoMatchFoundException(Exception):
    pass

def has_no_repeated_letter(string):
    if string == "":
        return True
    for i in range(1, len(string)):
        if string[0] == string[i]:
            return False
    return has_no_repeated_letter(string[1:])

# print(f"{has_no_repeated_letter('Cheese') = }")

def get_longest_matching_substring(string, check_match):
    longest = ''
    try:
        if check_match(string) == True:
            raise NoMatchFoundException
        while(string != 'ecar'):
            for i in range(0, len(string)):
                if check_match(string[:i]) == True:
                    if len(string[:i]) >= len(longest):
                        longest = string[:i]
                    elif string == string[0:i]:
                        string = ''
                else:
                    string = string[1:]
                    break
            continue
        return longest
    except NoMatchFoundException as error:
        print("No match found")

print('ablewasiereisawelba:', has_no_repeated_letter('ablewasiereisawelba'))
# expected output: ablewasiereisawelba: False

print('abcd:', has_no_repeated_letter('abcd'))
# expected output: abcd: True

print('longest with no repeated letter:', get_longest_matching_substring('i saw abba, but ablewasiereisawelba by the racecar', has_no_repeated_letter))
# expected output: longest with no repeated letter: ut ablew