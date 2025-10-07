#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number");
	scanf("%d",&n);
	
	for(i=2;i<=n;)
	{
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
