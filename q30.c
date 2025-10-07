#include<stdio.h>
int main()
{
	int num,sum=0,var,q;
	printf("enter a number");
	scanf("%d",&num);
	var=num;
	while(var>0)
	{
		q=var%10;
		sum=sum*10+q;
		var=var/10;
	}
	printf("reverse=%d",sum);
}
