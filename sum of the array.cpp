#include <stdio.h>
int main(){
	int n,i,a[n],sum=0;
	printf("Enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter value at a[%d] position is :",i);
	scanf("%d",&a[i]);
	}
	for (i=1;i<=n;i++)
	{
		sum =sum+a[i];
	}
	printf("sum of array is %d",sum);
	return 0;
	
	
}
