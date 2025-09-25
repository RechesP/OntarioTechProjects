import re

def get_word_size(word, count = 0):
    if word == "":
        return count
    count += 1
    return get_word_size(word[1:], count)

print(f'{get_word_size("a") = }')
print(f'{get_word_size("car") = }')
print(f'{get_word_size("university") = }')
print(f'{get_word_size("honour") = }')

def process_word(string):
    return get_word_size(string)

def process_sentence(sentence):
    list = []
    word = ''
    count = 0
    for i in range(0,len(sentence) + 1):
        if i > len(sentence)-1 or sentence[i] == ' ':
            list.append(process_word(word))
            word = ''
        elif  sentence[i] == '-' or sentence[i] == '.' or sentence[i] == ',' or sentence[i] == ';' or sentence[i] == ':' or sentence[i] == '!' or sentence[i] == '?':
            pass
        elif sentence[i] != ' ':
            word += sentence[i]
    return list

print(f'{process_sentence("the quick brown fox jumped over the lazy dog") = }')