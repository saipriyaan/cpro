
#include <stdio.h>

int main()
{
   int ro,num,nimm;
   printf("Enter the num");
   scanf("%i",&num);
   
   for(ro=0;ro<=num;ro++){
       
       for(nimm=0;nimm<=num-ro;nimm++){
           
       printf(" ");
    
       }
       
       for(nimm=0;nimm<=num;nimm++){
           
       printf("*");
    
    
    
       }
       
       printf("\n");
       
      
       
     
   }
   

    return 0;
}
