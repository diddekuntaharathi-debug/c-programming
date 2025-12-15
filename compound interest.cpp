#include <stdio.h>
#include <math.h>
 int main(){
 	int p,r,t;
	 float CI;
 	printf("enter p,t,r values");
 	scanf("%d%d%d",&p,&t,&r);
 	CI=p*(pow(1+(r/100),t)-1);
 	printf("CI=%d",CI);
 	return 0;
 }
