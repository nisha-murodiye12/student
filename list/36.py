n=int(input("enter the number"))
a=[]
for i in range(n):
    num=int(input())
    a.append(num)
    
t=a[n-1]
j=n-1      
while j>0:
     a[j]=a[j-1]
     a[0]=t
     j-=1
     
for i in range(n):
    print(a[i])

