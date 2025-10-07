#include<stdio.h>
int main()
{
	int a[10],odd=0,even=0,i;
	printf("enter 10 integers");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("total odd numbers=%d and total even numbers=%d",odd,even);
}
