n = int(input("Enter the number: "))
a = []
print("Enter the elements:")
for i in range(n):
    num = int(input())
    a.append(num)

reversed_list =list(reversed(a))

print("Original list:", a)
print("Reversed list:", reversed_list)

