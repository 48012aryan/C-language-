#include<stdio.h>

int main()
{
    int i,n;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
     int a[n];
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d [i]", &a[i]);
    }
 
    printf("\nAll negative elements in array are : ");
    for(i=0; i<n; i++)
    {
         
        if(a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }
 
    return 0;
}

