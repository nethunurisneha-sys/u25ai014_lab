#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	i=1;
	for(i=1;i<=n;)
	{
		printf("%d\n",i);
		i=i+2;
	}
}
