#include<stdio.h>
int main()
{
	int num,q,var,sum=0;
	printf("enter a number");
	scanf("%d",&num);
	var=num;
	while(var>0)
	{
	q=var%10;
	sum=sum*10+q;
	var=var/10;
	}
	if(num==sum)
	printf("it is palindrome");
	else
	printf("not palindrome");
	
}
