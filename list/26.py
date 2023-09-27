n = int(input("Enter the number: "))
a = []

for i in range(n):
    num = int(input())
    a.append(num)

insert_index = int(input("Enter the index at which to insert the number: "))
insert_element = int(input("Enter the number to insert: "))

a.insert(insert_index, insert_element)

print("Updated list after inserting", insert_element, "at index", insert_index, ":", a)

