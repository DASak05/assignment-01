#include<stdio.h>
#define PI 3.14
int main()
{
	float r,d,p,a;
	printf("enter the radius of the circle\n");
	scanf("%f",&r);
	d=2*r;
	printf("Diamter is %f",d);
	p=2*PI*r;
	printf("Circumference is %f",p);
	a=PI*r*r;
	printf("area is %f",a);
	return 0;
}
