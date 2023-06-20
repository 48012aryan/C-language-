#include<stdio.h>    
     
int main()    
{    
    int n , i;
    int largest , second;
    printf("Enter size of arry: ");
    scanf("%d",&n);
    
    int a[n];
	for(i=0 ; i<n ; i++) {
		
		printf("Enter elements of arry[%d] : ",i);
		
		scanf("%d",&a[i]);
	}
		
		for(i=0 ; i<n ; i++){
			
			
			printf("%d",a[i]);
		}
		
		if(a[0] > a[1]) {
      largest = a[0];
      second  = a[1];
   } else {
      largest = a[1];
      second  = a[0];
   }
	   for(i = 0; i < n; i++) {
      if( largest < a[i] ) {
         second = largest;
         largest = a[i];
      } else if( second < a[i] ) {
         second =  a[i];
      }
    
        
    }
	printf("Largest - %d \nSecond - %d \n", largest, second);
	return 0;
}
	      
     
        
      


