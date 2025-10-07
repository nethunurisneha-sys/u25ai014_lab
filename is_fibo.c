#include<stdio.h>
int main()
{
	int n1=0,n2=1,n=0,num;
	printf("enter a number");
	scanf("%d",&num);
	while(num>n)
	{
		n=n1+n2;
		n1=n2;
		n2=n;
		
	}
	if(num==n)
	printf("number is a element in fibo");
	else
	printf("number is not fibo");
}
	
