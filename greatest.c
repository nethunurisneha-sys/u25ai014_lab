#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter fir num");
	scanf("%d",&a);
	printf("enter sec num");
	scanf("%d",&b);
	printf("enter third num");
	scanf("%d",&c);
	if(a>b&&a>c)
	printf("%d is max",a);
	else if(b>a&&b>c)
	printf("%d is max",b);
	else
	printf("%d is max",c) ;
}

