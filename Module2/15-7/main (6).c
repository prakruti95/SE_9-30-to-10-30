#include <stdio.h>

int main()
{
   int i,j;
   for(i=5;i>=1;i--)
   {
       for(int space=0;space<=5-i;space++)
       {
           printf(" ");
       }
       for(j=i;j>=1;j--)
       {
           printf("* ");
       }
       printf("\n");
   }

    return 0;
}
