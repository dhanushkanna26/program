num = int(input())
    instructions = []
    lst = []
    
    for inst in range(num):
        command, *arguments = input().split()
        arguments = map(int, arguments)
        
        if command == 'print':
            print(lst)
        
        else:
            method = getattr(lst, command)
            method(*arguments)
        
