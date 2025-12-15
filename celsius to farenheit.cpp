//converting celsius temp to farenheit//
#include <stdio.h>
int main(){
	float c,f;
	printf("enter temp in celsius");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("temperature in farenheit is %f",f);
	return 0;
}

