n = int(input("enter the number n:"))
for i in range(1, n + 1):
    num = 10
    for j in range(1, i + 1):
        print(num, end=" ")
        num -= 2
    print()

