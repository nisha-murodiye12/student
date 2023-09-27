n = int(input("enter the number"))
for i in range(2, n+1):
    s = 0
    j = 1
    while j < i:
        if i % j == 0:
            s = s + 1
        j = j + 1
    if s == 1: 
        print(i, end=" ")


