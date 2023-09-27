n = int(input("Enter the number: "))
a = []
print("Enter list elements:")

for i in range(n):
    num = int(input())
    a.append(num)

print()

c = 1
for num in a: 
    c = c * num  

print("Sum:", c)

