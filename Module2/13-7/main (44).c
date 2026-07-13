#include<stdio.h>

int main()
{
    int row;
    printf("Enter Num of Rows:");
    scanf("%d",&row);
    //row
    for(int i=1;i<=row;i++)
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
