#include <stdio.h>
int main(){
	int a[100],n,found=0,i,search;
	printf("\nenter n value");
	scanf("%d",&n);
	printf("\nArray elements is");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nSearching element is");
	scanf("%d",&search);
	for (i=0;i<n;i++)
	{
		if(search==a[i])
		{
		printf("searching element is found at the location %d",i);
		found=1;
		break;
	}
	}
	if(found==0)
	printf("\n searching element is not found");
	return 0;
}

