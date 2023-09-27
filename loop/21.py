n=int(input("enter the number"))
for i in range (1,n+1):
  for j in range (n,i,-1):
     print(" ",end=" ")
  for k in range (1,i+1):
     print(k*2," ",end=" ")
  print()
for i in range (n,1,-1):
  for j in range (n,i,-1):
    print(" ",end=" ")
  for k in range (1,i+1):
    print(k*2," ",end=" ")
  print()
 
