#include <stdio.h>
int main(){
int a[100],n,i,*ptr;
ptr=a;
printf("enter array size is n");
scanf("%d",&n);
printf("\nenter %d values",n);
for(i=0;i<n;i++)
{
	scanf("%d",(ptr+i));
}
for(i=0;i<n;i++)
{
	printf("%d",*(ptr+i));
}
	return 0;	
}
