#include<stdio.h>
int main()
{
	int num,n,q,count=0;
	printf("enter a number");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
		q=num%10;
		if(n%q==0)
		count++;
		num=num/10;
	}
	printf("%d",count);
}
