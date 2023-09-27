n = int(input("Enter the number: "))
a = []

for i in range(0, n + 1):
    a.append(i)

print("Armstrong numbers between  0 and", n)

for i in range(1, n + 1):
    c = 0
    num = i  
    temp = num

    while temp > 0:
        digit = temp % 10
        c += digit ** 3 
        temp //= 10

    if c == num:
        print(a[i])

