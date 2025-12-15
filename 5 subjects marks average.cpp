#include <stdio.h>
int main(){
	int a,b,c,d,e,total;
	float average;
	printf("enter a subject marks :");
	scanf("%d",&a);
	printf("enter b subject marks :");
	scanf("%d",&b);
	printf("enter c subject marks :");
	scanf("%d",&c);
	printf("enter d subject marks :");
	scanf("%d",&d);
	printf("enter e subject marks :");
	scanf("%d",&e);
	total=a+b+c+d+e;
	printf("\ntotal of all subjects is %d ",total);
	average=total/5.0;
	printf("\n average is %.2f",average);
	scanf("%.2f",average);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
