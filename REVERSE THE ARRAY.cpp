#include <stdio.h>
int main(){
	int n,i,a[n];
	printf("Enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value at a[%d] position is :",i);
	scanf("%d",&a[i]);
	}
		printf(" reverse the array is : ");
	for (i=n-1;i>=0;i--)
	{
		printf("\t%d",a[i]);
	}
	return 0;
	
	
}
