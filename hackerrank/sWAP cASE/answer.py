def swap_case(s):
    result = ""
    for letter in s:
        ascii = ord(letter)
        if ascii >= 65 and ascii <= 90:
            c = chr(ascii + 32)
        elif ascii >= 97 and ascii <= 122:
            c = chr(ascii - 32)
        else:
            c = letter
        result += c
    return result

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
