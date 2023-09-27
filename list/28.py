n=int(input("enter the number:"))
a=[]
for i in range(n):
   num=int(input())
   a.append(num)
   
max_element=max(a)

print("max of list:",max_element)
