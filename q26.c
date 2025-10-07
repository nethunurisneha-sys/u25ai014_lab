#include<stdio.h>
int main()
{
	int i,n,sum1,sum2;
	printf("enter a number");
	scanf("%d",&n);
	sum1=0;
	sum2=0;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		sum1=sum1+i;
		else
		sum2=sum2+i;
	}
	printf("sum of even=%d,sum of odd=%d",sum1,sum2);
}
