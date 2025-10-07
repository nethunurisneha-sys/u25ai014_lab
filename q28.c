#include<stdio.h>
int main()
{
	int num,q,k,var,x=1,sum=0,a=0;
	printf("enter a number");
	scanf("%d",&num);
	var=num;
	while(var!=0)
	{
	var=var/10;
	a=a+1;
	}
	var=num;
	while(var!=0)
	{
		q=var%10;
		for(k=a;k!=0;)
		{
			x=x*q;
			a=a-1;
		}
		sum=sum+x;
		var=var/10;
	}
	if(sum==num)
	printf("it is a armstrong number");
	else
	printf("not armstrong number");
	
	
}
