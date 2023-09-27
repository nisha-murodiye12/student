a=int(input("enter the number a:"))
b=int(input("enter the number b:"))    
operator = input("Enter an arithmetic operator (+, -, *, /): ")

if operator == "+":
    result = add(a, b)
elif operator == "-":
    result = subtract(a, b)
elif operator == "*":
    result = multiply(a, b)
elif operator == "/":
    result = divide(a, b)
else:
    result = "Invalid operator"

print("Result:", result)


