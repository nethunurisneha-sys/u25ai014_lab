#include<stdio.h>
int main()
{
	int n,x,y;
	printf("enter value of x");
	scanf("%d",&x);
	printf("enter value of n");
	scanf("%d",&n);
	switch(n)
	{
		case(1):y=1+x;
		break;
		case(2):y=1+x/n;
		break;
		case(3):y=1+x^n;
		break;
		default:y=1+n*x;
		break;
	}
	printf("%d",y);
}
