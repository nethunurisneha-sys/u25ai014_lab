#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		printf("0");
		printf("1");
		for(k=5-i;k>0;k--)
		printf("0");
		printf("\n");
		
	}
}
