n=int(input("enter the number"))
sum=0
if 0>n:
  m=n%10
  sum=sum+m*m*m
  n=n//10
if sum==n:
  print("armstrong")
else:
  print("not armstrong")
