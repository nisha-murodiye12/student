n=int(input("enter the number"))
a=[]
print("enter the element")
for i in range(n):
    num=int(input())
    a.append(num)
    
pop_element=int(input("enter the pop"))
pop=a.pop(pop_element)
print(pop)
