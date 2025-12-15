#include <stdio.h>
 void swap(int *a,int *b);
 int main (){
 	int a=10,b=20;
 	printf("\nbefore swapping is a=%d and b=%d",a,b);
 	swap(&a,&b);
 	printf("\n after swapping is a=%d and b=%d",a,b);
 	return 0;
 }
 void swap(int *a,int *b)
 {
 	int temp;
 	temp=*a;
 	*a=*b;
 	*b=temp;
 }
