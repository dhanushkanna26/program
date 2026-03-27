def mutate_string(string, position, character):
    temp_string = ""
    for i in range(len(string)):
        if i != position:
            temp_string = temp_string + string[i]
        else:
            temp_string = temp_string + character
    return temp_string
if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)
