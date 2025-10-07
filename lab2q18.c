#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter fir num");
	scanf("%d",&a);
	printf("enter sec num");
	scanf("%d",&b);
	printf("enter third num");
	scanf("%d",&c);
	d=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("%d",d);
}
