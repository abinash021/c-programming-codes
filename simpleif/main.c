#include <stdio.h>
void main()
{
    float Per;
    char grade=' ';
    printf("\n enter the Percentage");
    scanf("%f",&Per);
   if(Per>=80)
   {
       grade='A';
   }
   printf("\n Result is pass");
   printf("\n Grade%c",grade);
}
