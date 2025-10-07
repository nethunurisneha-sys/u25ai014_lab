#include<stdio.h>
int main()
{
	int i,j,l,k;
	for(i=1;i<=5;i++)
	{
		for(j=5-i;j>0;j--)
		printf(" ");
		printf("*");
		for(k=1;k<=i-1;k++)
		printf(" *");
		for(l=5-i;l>0;l--)
		printf(" ");
		printf("\n");
	}
}
