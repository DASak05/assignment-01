#include<stdio.h>
int main()
{
	int x,y;
	printf("Please enter two numbers\n");
	scanf("%d %d",&x,&y);
	if(x>y)
	printf("maximum number is %d",x);
	else
	printf("maximum number is %d",y);
	return 0;
}
