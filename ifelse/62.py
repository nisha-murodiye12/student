a = int(input("enter the number a:"))
g = input("enter the gender (m/f):")
d = int(input("enter the number d:"))

if a >= 18 and a < 30 and g == 'm':
    amt = d * 700
elif a >= 18 and a < 30 and g == 'f':
    amt = d * 750
elif a >= 30 and a <= 40 and g == 'm':
    amt = d * 800
elif a >= 30 and a <= 40 and g == 'f':
    amt = d * 850
else:
    print("Appropriate age and gender combinations are not met.")

if 'amt' in locals():
    print("Amount:", amt)







