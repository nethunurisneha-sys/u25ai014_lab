#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	printf("enter 10 elements");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	sum=sum+a[i];
	printf("sum of elements=%d",sum);
}
