n = int(input("Enter the number of rows and columns: "))
a = []  
b = []  
c = []  

print("Enter the elements of the first matrix:")
for i in range(n):
    row = []  
    for j in range(n):
        num = int(input())
        row.append(num)  
    a.append(row)  

print("Enter the elements of the second matrix:")
for i in range(n):
    row = []  
    for j in range(n):
        num = int(input())
        row.append(num)  
    b.append(row)  


for i in range(n):
    row = [0] * n  
    c.append(row) 

print("Minus 2D array:\n")
for i in range(n):
    for j in range(n):
        c[i][j] = a[i][j] - b[i][j]
        print(c[i][j], end=" ") 
    print()  


