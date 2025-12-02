//volume of sphere //
#include <stdio.h>
int main(){ 
int radius;
float volume;
printf("enter radius value");
scanf("%d",&radius);
volume=(4/3)*3.14*radius*radius*radius;
printf("volume of sphere is %.3f",volume);
return 0;
}
