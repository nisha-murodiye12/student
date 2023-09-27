n=int(input("enter the number:"))
a=[]
for i in range(n):
   num=int(input())
   a.append(num)
   
sum_list = sum(a)

print("sum of list:",sum_list)
