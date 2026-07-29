#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10], i, j, temp,num=0;
    
    printf("Enter Size of Array: ");
    scanf("%d",&num);
    
    printf("\n Enter integers: ");
    for(i=0; i<num; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i =0; i<num-1; i++)
    {
        for(j=i+1;j<num; j++)
        {
            if(arr[i] >arr[j])
            {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp; 
            }
        }
    }
    printf("\n Ascending Order: ");
     for(i=0;i<num;i++)
    {
    printf("%d", arr[i]);
    }
    
    
    for(i =0; i<num-1; i++)
    {
        for(j=i+1;j<num; j++)
        {
            if(arr[i]<arr[j])
            {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp; 
            }
        }
    }
    printf("\n Descending Order: ");
    for(i=0;i<num;i++)
    {
    printf("%d", arr[i]);
    }
    
   
    
   

  
    return 0;
}