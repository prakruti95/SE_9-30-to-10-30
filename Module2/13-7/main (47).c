#include<stdio.h>

int main()
{
   
    //row
    for(int i=1;i<=4;i++)
    {
        //col
        for(int j=1;j<=i;j++)
        {
             printf("%d",i*2);
        }
        printf("\n");
       
    }

    return 0;
}
