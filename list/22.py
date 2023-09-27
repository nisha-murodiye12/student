n=int(input("enter the number"))
a=[]
print("enter the element")
for i in range(n):
   num=int(input())
   a.append(num)
   
index_element=int(input("enter the index"))
index=a.index(index_element)

print(index)
