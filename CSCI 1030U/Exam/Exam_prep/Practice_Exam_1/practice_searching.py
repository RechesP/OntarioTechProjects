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