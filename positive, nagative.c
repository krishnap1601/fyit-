⁰#include <stdio.h>
#include <stdlib.h>

 int main()
{ 
     int num;
     printf("enter a number:\n");
     scanf("%d", &num);

     if (num > 0) { 
          printf("%d is positive. \n", num);
     }  else if (num < 0) {
          printf("%d is negative. \n", num);
     } else { 
         printf("the number is zero.
         \n");  
     } 

return 0;
}