rh=int(input("enter the number rh:"))
cc=int(input("enter the number cc:"))
ts=int(input("enter the number ts:"))
if rh>50 and cc>0.7 and ts>5600:
    print("grade 10")
elif rh>50 and cc>0.7:
    print("grade 9")
elif cc>0.7 and ts>5600:
    print("grade 8")
elif rh>50 and ts>5600:
    print("grade 7")
else:
    print("grade 0")
