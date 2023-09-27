a=int(input("enter the number a:"))
b=int(input("enter the number b:"))
c=int(input("enter the number c:"))
d=int(input("enter the number d:"))
if a>b:
  m1=a
else:
  m1=b
if c>d:
  m2=c
else:
  m2=d
if m1>m2:
  print("third max:",m2)
else:
  print("third max:",m1)
