#include <stdio.h>
int main()
{ 
  int a,b,c,d;
  printf("enter the number a,b,c,d:");
  
  scanf("%d%d%d%d",&a,&b,&c,&d);
  
  int largest;
  int slargest;
  
  if (a>=b)
  {
    largest=a;
    slargest=b;
    }
 else
 { 
    largest=b;
    slargest=a;
  }
     if (c >= largest) 
    {
        slargest = largest;
        largest = c;
    } 
    else if (c > slargest)
     {
        slargest = c;
    }

    if (d >= largest)
     {
        slargest = largest;
        largest = d;
    } 
    else if (d > slargest) 
    {
        slargest = d;
    }

    printf("The second largest number is: %d\n", slargest);

    return 0;
}

