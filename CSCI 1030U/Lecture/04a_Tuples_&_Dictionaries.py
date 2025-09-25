# 04a Tuples and Dictionaries

# Review Coding Exercise 04a.1

sentence = 'ahmed runs quicly'

# print(f'{sentence[::-1] = }')

# seperate the words in the strinf into a list of words
words = sentence.split(' ')

# reverse the order of the words list
# reverse_words = words[::-1]
reverse_words = []
# for word in words:
#     reverse_words = [word] + reverse_words
for index in range(len(words) - 1, -1, -1):
    reverse_words.append(words[index])

# print(f'{reverse_words = }')

# combine the (reversed) words list back into a string
# reverse_sentence = ' '.join(reverse_words)
reverse_sentence = ' '
for words in reverse_words:
        reverse_sentence += words + ' '

print(f'{reverse_sentence.strip() = }')

# coding exercise 04a.2

paragraph = "Canada is a country in North America. Its ten provinces and three territories extend from the Atlantic Ocean to the Pacific Ocean and northward into the Arctic Ocean, making it the world's second-largest country by total area, with the world's longest coastline. Its border with the United States is the world's longest international land border. The country is characterized by a wide range of both meteorologic and geological regions. It is a sparsely inhabited country of 40 million people, the vast majority residing south of the 55th parallel in urban areas. Canada's capital is Ottawa and its three largest metropolitan areas are Toronto, Montreal, and Vancouver."
words = paragraph.split(' ')
word_frequency = {}
for word in words:
    if word in word_frequency.keys():
        # a new word -> add that word as a key, with the value 1
        word_frequency[word] += 1
    else:
        # an already added word -> increment the value for that key
        word_frequency[word] = 1

print(f'{word_frequency = }')

# Coding Challenge 04a.1
# dictionary = [keys]