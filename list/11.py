n=int(input("enter the number"))
a=[]
print("enter list number")

for i in range(n):
    num=int(input())
    a.append(num)
print()
c=0
t=0
for num in a:
   if num%2==0:
      c=c+num
   else:
      t=t+num
print("even sum:",c)
print("odd sum:",t)
      
  

