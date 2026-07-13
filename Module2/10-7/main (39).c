#include<stdio.h>
#include<conio.h>
int main()
{
    int num,max=0;
    printf("Enter Any  Number: ");
    scanf("%d",&num);
    
    while(num>0)
    {
        int rem = num%10;
        if(rem>max)
        {
            max=rem;
        }
        num=num/10;
    }
    
    printf("Biggest digits is: %d",max);
    
  
    return 0;
}
