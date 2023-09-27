n=int(input("enter the number"))
for i in range (1,n+1):
 for j in range (n,i,-1):
   print(" ",end=" ")
 for k in range (1,i+1):
   print("*"," ",end=" ")
 for s in range (n,i,-1):
   print(" ",end=" ")
 for j in range (n,i,-1):
   print(" ",end=" ")
 for k in range (1,i+1):
   print("*"," ",end=" ")
 print()
for i in range (1,n*2,1):
   for j in range (1,i+1):
     print(" ",end=" ")
   for k in range (i,n*2,1):
     print("*"," ",end=" ")
   print( )
