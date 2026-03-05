n=int(input())
if(1<n<6):
    if(n%2==0):
        print("Not Weird")
    else:
        print("Weird")
elif(5<n<21):
    if(n%2==0):
        print("Weird")
elif(n%2==0):
    print("Not Weird")
else:
    print("Weird")
