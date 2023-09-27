n = int(input("Enter the number: "))
a = []

for i in range(1, n + 1):
    a.append(i)

for i in range(1, n + 1):
    s = 0
    num = i 
    while num > 0:
        digit = num % 10
        s += digit
        num //= 10  
    if i % s == 0:
        print(i)

