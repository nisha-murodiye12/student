sp=int(input("ennter the number sp:"))
cp=int(input("enter the number cp:"))
if sp>cp:
  profit=sp-cp
  percentageprofit=profit/cp*100
  print(percentageprofit)
else:
  print("invalid")
