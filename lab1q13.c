#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num==0)
	printf("num is zero");
	else if(num%2==0)
	printf("num is even");
	else
	printf("num is odd");
	
}
