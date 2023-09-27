n=int(input("enter the number:"))
a=[ ]
print("enter the element")
for i in range(n):
  num=int(input())
  a.append(num)
  
for j in range(0, n-i-1):
     if arr[j] > arr[j+1]:
      arr[j], arr[j+1] = arr[j+1], arr[j]
      
print("result:")
for i in range(n):
    print(a[i])
print()
        
                
