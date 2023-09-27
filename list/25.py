n = int(input("Enter the number: "))
a = []
print("Enter the elements:")
for i in range(n):
    num = int(input())
    a.append(num)

remove_element = int(input("Enter the number to remove: "))
a.remove(remove_element)

print("Updated list after removing", remove_element, ":", a)

