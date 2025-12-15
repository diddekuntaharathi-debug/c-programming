#include <stdio.h>
int main(){
	int n,i,min,max,a[i];
	printf("\nenter n value");
	scanf("%d",&n);
	printf("\nArray elements is");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[i];
	min=a[i];
	for(i=0;i<n;i++)
	if(a[i]>max) 
	max=a[i];
	if(a[i]<min)
	min=a[i];
	printf("\nmaximum value is %d",max);
	printf("\n minimum value is %d",min);
	return 0;
}
