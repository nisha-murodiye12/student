u=int(input("enter the number u:"))
if u<=100:
  print("no charge")
elif u>=100 and u<=200:
    eb=(u-100)*5
    print(eb)
elif u>200:
    eb=(100*5)+(unit-200)*10
    print(eb)
elif u<0:
    print("invalid")

