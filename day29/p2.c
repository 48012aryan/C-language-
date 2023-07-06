#include<stdio.h>

int main(){
	
   FILE *p;
   
   char name[20];
   
   p = fopen("Demo.txt","r");
   
   if(p == NULL){
   	
   	printf("Error");
   	
   }
   else{
   	
  
   	fgets(name,20,p);
   	
   	puts(name);
   	
   	
   }
   
	
	
	return 0;
}
