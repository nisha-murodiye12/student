n = int(input("enter the number"))
for i in range(n, 0, -1):
    for j in range(1, n+1):
        for k in range(1, j+1):
            print(" ", end=" ")
        for s in range(1, i+1):
            print("*", end=" ")
        print()

