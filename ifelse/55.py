a=int(input("ennter the number a:"))
b=int(input("enter the  number b:"))
c=int(input("enter the number c:"))
if a>=b:
    largest=a
    slargest=b
else:
        largest=b
        slargest=a

if  c>=largest:
     slargest=largest
     largest=c
    
elif c>slargest:
     slargest=c
     
print(slargest)
  
