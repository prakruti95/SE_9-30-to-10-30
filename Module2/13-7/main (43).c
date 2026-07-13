#include<stdio.h>

int main()
{
    //row
    for(int i=1;i<=5;i++)
    {
        //col
        for(int j=1;j<=i;j++)
        {
             printf("*");
        }
        printf("\n");
       
    }

    return 0;
}
