unit=int(input("enter the number u:"))
if unit<=50:
  a=unit*0.50
elif unit<=100:
  a=25+(unit-50)*0.75
elif unit>=100:
  a=100+(unit-150)*1.50
elif unit>=250:
  a=220+(unit-250)*1.50
else:
  print("invalid")
  
surcharge=a*0.20
total=a+surcharge
print(total)


  
