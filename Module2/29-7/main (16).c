#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10], i, j, temp,num=0;
    
    printf("Enter Size of Array: ");
    scanf("%d",&num);
    
    printf("\n Enter 5 integers: ");
    for(i=0; i<num; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    for(i=0; i<num; i++)  
    {
        for(j=0; j<num - i;j++)
        {
            if(arr[j] < arr[j + 1])  
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;  
            }
        }
    }
    
    
    printf("\nDescending Order: ");
    for(i = 0; i<num; i++)
    {
        printf("%d", arr[i]);
    }
    

  
    return 0;
}