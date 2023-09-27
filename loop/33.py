n=int(input("enter the number:"))
for i in range(n,0,-1):
  for j in range(1,i+1):
     print(j,end=" ")
  for k in range(n,i,-1):
     print(" "," ",end=" ")
  for m in range(1,i+1):
     print(m,end=" ")
  print( )
