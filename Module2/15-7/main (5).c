#include <stdio.h>

int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(int space=0;space<=5-i;space++)
       {
           printf(" ");
       }
       for(j=1;j<=i;j++)
       {
           printf("* ");
       }
       printf("\n");
   }

    return 0;
}
