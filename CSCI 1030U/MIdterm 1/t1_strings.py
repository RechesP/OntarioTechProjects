def split_by_semi(data_string):
    integers = data_string.split(';')
    intList = []
    i = 0
    for integer in integers:
        intList.insert(i,int(integer))
        i += 1
    return intList

print(f"{split_by_semi('41;35;12;25;16')}")