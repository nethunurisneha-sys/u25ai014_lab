#include<stdio.h>
int main()
{
	float i,n,fact=1.0,sum=0.0;
	printf("enter a num");
	scanf("%f",&n);
	for(i=1.0;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+(i/fact);
	}
	printf("%f",sum);4
}
