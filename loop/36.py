n=int(input("enter the number"))
for i in range(1,n+1):
 for j in range(n,i,-1):
   print(" ",end=" ")
 print("*",end=" ")
 for k in range(2*i-1):
   print(" ",end=" ")
 if i!=0:
   print("*",end=" ")
 print( )
 





