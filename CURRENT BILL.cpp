#include <stdio.h>
int main(){
	int units;
	float amount ,charges,totalamount;
	printf("\n enter no of units");
	scanf("%d",&units);                                                                          
	if(units <=50)
	{
		amount =units*2.50;
		charges=25;
	}
	else if (units<=100)
	{
		amount =units*3.00;
		charges=50;
	}
	else if (units<=200)
	{
		amount =units*3.50;
		charges=75;
	}
	else if(units<=300)
	{
		amount =units*5.00;
		charges=125;
	}
	totalamount =amount+charges;
	printf("\n total current bill %.2f",totalamount);
	return 0;
}
