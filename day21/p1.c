#include<stdio.h>
#include<string.h>

int main(){
	
	char email[50];
	char password[50];
	char email1[]= "meetakoliya@gmail.com" ;
	char password1[]= "meet@1234" ;
	
	printf ("Enter your email :");
	scanf ("%s",email);
	
	printf ("Enter your password :");
	scanf("%s",password);
	
	if(strcmp(email,email1) == 0 && strcmp (password,password1) == 0) {
		
		printf("login approve !");
		
	}
    else{
    	
    	printf("invalid email or password");
	}	
	
	 return 0;
}
