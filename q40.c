#include<stdio.h>
int main()
{
	int sum=0,num ;
	do
	{
		printf("enter number");
		scanf("%d",&num);
		if(num<0)
		break;
		sum=sum+num;
	}
		while(num>=0);
	printf("%d",sum);
	
}
