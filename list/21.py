n=int(input("enter the number"))
a=[]
print("enter the element")
for i in range(n):
   num=int(input())
   a.append(num)
   
element_count = int(input("Enter the element to count: "))
count = a.count(element_count)

print(count)

