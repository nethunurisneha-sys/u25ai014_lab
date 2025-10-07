#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a num");
	scanf("%d",&a);
	printf("enter sec num");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("%d%d",a,b);
}
