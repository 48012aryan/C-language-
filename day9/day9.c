#include<stdio.h>

 int main(){
 	
 	int a,b,c;
 	
 	printf("enter value A :");
 	scanf("%d",&a);
 	
 	printf("enter value B :");
 	scanf("%d",&b);
 	
 	printf("enter value C :");
 	scanf("%d",&c);
 	
 	if(a<b){
 		
 	    if(a<c){
 	    	printf("A is min\n");
 	    
 	    	
		 }
 		else{
 			
 			printf("C is min\n");
		 }
	 }
 	
 	else{
 		if(b<c){
 			printf("B is min\n");
 			
		 }
 		else{
 			printf("C is min\n");
 			
		 }
	 }
 	return 0;
 }
