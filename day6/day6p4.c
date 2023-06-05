int main(){
  	
  	int x,y,ans;
  
  	printf("enter the value x : ");
	scanf("%d",&x);
	
	
	printf("enter the value y: ");
	scanf("%d",&y);
	
	ans = (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	
	 printf("%d",ans);

  	  return 0;
  	
  }

