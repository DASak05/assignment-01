#include<stdio.h>
int main()
{
	int num;
	printf("enter a num\n");
	scanf("%d",&num);
	switch(num%2)
	{case 0:
	    printf("%d is an even num\n",num);
	    break;
	    case 1:
	        printf("%d is an odd num\n",num);
	        break;
	}
	return 0;
}
