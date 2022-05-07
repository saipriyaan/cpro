
#include <stdio.h>

int main()
{
   int ro,num,nimm;
   printf("Enter the num");
   scanf("%i",&num);
   
   for(ro=0;ro<=num;ro++){
       
       for(nimm=0;nimm<=ro;nimm++){
           
       printf("%i",nimm);
       
       }
       printf("\n");
       
      
       
     
   }

    return 0;
}
