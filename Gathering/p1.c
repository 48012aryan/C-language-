#include<stdio.h>


sum(int a[],int n){
	
	int c=0,i;
	
	for(i=0 ; i<n ; i++){
		
		c += a[i];
	}
	printf("sum : %d",c);
}

int main(){
	int n;
	
	printf("Enter Value :");
	scanf("%d",&n);
	
	int arr[n],i;
	
	for(i=0 ; i<n ; i++){
		
	printf("Enter Value :");
	scanf("%d",&arr[i]);
	
		
	}
	
	sum (arr,n);
	
	return 0;
}
