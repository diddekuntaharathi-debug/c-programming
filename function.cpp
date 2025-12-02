#include <stdio.h>
int main()
{
	int addition(int a,int b);
	int x,y,result;
	printf("\n enter x and y values");
	scanf("%d%d",&x,&y);
	result =addition(x,y);
	printf("%d",result);
	return 0;
}
int addition(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
