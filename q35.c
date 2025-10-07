#include<stdio.h>
#include<process.h>
int main()
{
	int num,sum;
	printf("enter a number");
	scanf("%d",&num);
	if(num<=9)
    { 	
	    printf("sum of digits in single digit=%d",num);
	    exit(1);
	}
	else
	{
			
  	while(num>9)
	{
		int sum=0;
		while(num>0)
		{
			sum=sum+(num%10);
			num=num/10;
		}
		num=sum;
	}
	printf("sum of digits in single digit=%d",num);
    }   
}
