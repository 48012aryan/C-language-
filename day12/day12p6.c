#include<stdio.h>

int main(){
	
	int n,f=1,i=1;
	
	printf("\nenterthe num :");
	scanf("%d",&n);
	
	while(i<=n){
		
		f=f*i;
		i++;
		
		
		
	}
	printf("factorial :%d",f);
	
	return 0;
}
