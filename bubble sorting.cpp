#include <stdio.h> 
int main(){
	int i,j,n,a[100],temp;
	printf("\n enter array size");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("\n enter value at a[%d]position",i);
		scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++) 
		{
			for(j=i++;j<n;j++)
			{
			
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
			}
		printf("\n after sorting");
			for (i=0;i<n;i++)
		{
			printf("\n%d",a[i]);
			return 0;
		}
}
