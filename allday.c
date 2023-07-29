#include <stdio.h>
int main()
{
  int allday;
  printf("enter the day number between 1 to 7:- "); 
  
  scanf("%d",&allday);
  
  if(allday==1)
  {     
        printf("\n monday");
  }
  
  else if(allday==2)
  {       
       printf("\n tuesday");
  }
  
  else if(allday==3)
  {       
       printf("\n wednesday");
  }
  
  else if(allday==4)
  {     
       printf("\n thursday");
  }
  
  else if(allday==5)
  {     
       printf("\n friday");
  }
  
  else if(allday==6)
  {      
       printf("\n saturday");
  }
  
  else if(allday==7)
  {      
       printf("\n sunday");
  }
  
  else
       printf("please enter valid number 1 to 7");
       
  return 0; 
}
  
  
  
  
  


