n = int(input("Enter the number of elements: "))
a = []

for i in range(n):
   num = int(input())
   a.append(num)

extend_list = a.extend([1, 2, 3])

print(a)  

