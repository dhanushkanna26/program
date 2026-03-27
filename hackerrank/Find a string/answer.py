def count_substring(string, sub_string):
    count_sub_string = len(sub_string)
    count = 0
    for s in range(len(string)):
        x = string[s: s + count_sub_string]
        if (x == sub_string):
            count = count + 1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
