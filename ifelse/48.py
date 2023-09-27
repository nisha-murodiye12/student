que=int(input("enter the number que:"))
cost=int(input("enter the number cost:"))
if cost>1000:
  p=que*100
  cost=p*10/100
  s=p-cost
  print(s)
else:
   print("invalid")
