c = int(input("enter the number c:"))
e = int(input("enter the number e:"))
t = c + e

if t == 44:
    print("44 technical fail")
elif t == 45:
    print("45 moderated")
elif t > 35:
    print(f"{t} pass")
else:
    print(f"{t} fail")
