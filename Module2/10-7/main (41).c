#include<stdio.h>
#include<conio.h>
int main()
{
    int num,ld,fd;
    printf("Enter Any  Number: ");
    scanf("%d",&num);
    
    ld = num%10;//4
    
    while(num>0)
    {
       if(num>9)
       {
        num=num/10;
       }
       else
       {
           fd=num;//1
           num=num/10;//1/10->0
           
       }
    }
    int ans = fd+ld;
    printf("%d",ans);
   
    
  
    return 0;
}
