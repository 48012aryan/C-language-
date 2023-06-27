#include<stdio.h>

void sum(int a,int b){
	
	printf("sum : %d\n\n",a+b);
	
}
void mum(int a,int b){
	
	printf("sum : %d\n\n",a-b);
	
}
void mil(int a,int b){
	
	printf("sum : %d\n\n",a*b);
	
}
void div(int a,int b){
	
	printf("sum : %d\n\n",a/b);
	
}



int main(){
	
	int a,b;
	char sign;
	
	while(1){
		
		printf("enter first value : ");
		scanf("%d",&a);
		
		printf("enter second value : ");
		scanf("%d",&b);
		
		printf("+ , - , * , /\n\n");
		
		printf("make youe selection : ");
		scanf(" %c",&sign);

        switch(sign){
        	
        	case '+':
        		sum(a,b);
        		break;
        		
        	case '-':
        		mum(a,b);
        		break;
				
			case '*':
        		mil(a,b);
        		break;
						
        	case '/':
        		div(a,b);
        		break;	
        		
        }
        
	
		
}
	
	
	
	return 0;
}
