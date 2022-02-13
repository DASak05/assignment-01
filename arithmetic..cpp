#include<stdio.h>
int main()
{
	int x,y;
	int choice;
	printf("1.addition\n 2.subtraction\n 3.multiplicaton\n 4.division\n");
	printf("enter two number\n");
	scanf("%d %d",&x,&y);
	printf("enter your choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("addition of %d and %d is %d\n",x,y,x+y);
			break;
			
		case 2 :
			printf("substraction of %d and %d is %d\n",x,y,x-y);
			break;
			
		case 3 :
			printf("multiplication of %d and %d is %d\n",x,y,x*y);
			break;
			
		case 4 :
			printf("division of two number is %d\n",x/y);
			break;
	}
	return 0;
}
