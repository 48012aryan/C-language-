#include<stdio.h>

int main(){
	int i = 1;
	int n,sum = 0;
	printf("enter value :");
	scanf("%d",&n);
	
	
	while (i<=n){
		
		sum = sum + i ;
		i ++;
		
		
	}	
	printf("sum : %d",sum);
	
	
	return 0;
}
