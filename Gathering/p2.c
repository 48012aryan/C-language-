#include<stdio.h>

int fact(int a){
	
	if(a>=1){
		
		return a*fact(a-1);
	}
	else{
		return 0;
	}
}

int main(){
	
	int n;
	
	printf("Enter value :");
	
	scanf("%d",&n);
	
	printf("fact -> %d",fact(n));
	
	
	
	
	return 0;
}
