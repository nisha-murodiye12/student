n=int(input("enter the number"))
a=[]
for i in range(0,n+1):
   a.append(i)
for i in range(1,n+1):
   if(i%2==1):
      print(a[i],end=" ")
print( )
