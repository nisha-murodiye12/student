n = int(input("Enter the number of elements: "))
a = []

for i in range(n):
   num = int(input())
   a.append(num)

sort_list = sorted(a)

print(sort_list)

