#include<stdio.h>
int main(){
	
	int arr[] = {12,45,54,78,89};
	int *b1,*b2,*b3,*b4,*b5;
	
	
	b1 = &arr[0];
	b2 = &arr[1];
	b3 = &arr[2];
	b4 = &arr[3];
	b5 = &arr[4];
	
	printf("%u => %d\n",b1, (*b1)*(*b1));
	printf("%u => %d\n",b2, (*b2)*(*b2));
    printf("%u => %d\n",b3, (*b3)*(*b3));
    printf("%u => %d\n",b4, (*b4)*(*b4));
    printf("%u => %d\n",b5, (*b5)*(*b5));

	
	
	
	
	return 0;
}
