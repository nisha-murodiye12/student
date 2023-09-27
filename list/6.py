n = int(input("Enter the number: "))
a = []


for i in range(0, n + 1):
    a.append(i)

for i in range(2, n + 1):
    c = 0
    for j in range(1, i + 1):
        if i % j == 0: 
            c += 1  
    if c > 2:  
        print(a[i], end=" ")

print()

