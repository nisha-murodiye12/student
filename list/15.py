n = int(input("Enter the number of elements: "))
a = []

print("Enter the elements:")
for i in range(n):
    num = int(input())
    a.append(num)

for i in range(1, n):
    t = a[i]
    j = i - 1
    while j >= 0 and a[j] > t:
        a[j + 1] = a[j]
        j -= 1
    a[j + 1] = t

print("Insertion sort result:")
for i in range(n):
    print(a[i])

