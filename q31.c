#include<stdio.h>
int main()
{
	int num,sum=0,q;
	printf("enter a number");
	scanf("%d",&num);
	while(num>0)
	{
		q=num%10;
		sum=sum+q;
		num=num/10;
	}
	printf("sum of digits=%d",sum);
}
