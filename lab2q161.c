#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a num");
	scanf("%d",&a);
	printf("enter sec num");
	scanf("%d",&b);
	printf("enter third num");
	scanf("%d",&c);
	if(a>b)
	{
		if(b>c)
		printf("%d is max",a);
		if(c>a)
		printf("%d is max",c);
	}
	if (b>a)
	{
		if(a>c)
		printf("%d is max",b);
		if(c>b)
		printf("%d is max",c);
	}
}

