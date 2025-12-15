#include <stdio.h>
int main(){
	char op;
	int a,b;
	printf("enter operator(+,-,*,/,%)");
	scanf("%c",op);
	printf("Enter values of a,b");
	scanf("%d%d",&a,&b);
	switch (op)
	case '+':
	printf("a+b",a,b,a+b);
	break;
	
		case '-':
	printf("a-b",a,b,a-b);
	break;
	
		case'*':
	printf("a*b",a,b,a*b);
	break;
	
		case'/':
	printf("a/b",a,b,a/b);
	break;
	
		case'%':
	printf("a%b",a,b,a%b);
	break;
}
return 0;
