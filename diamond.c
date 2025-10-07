#include<stdio.h>
int main()
{
	int i,j,k,z,r=5;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r-i;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("%d",k);
		for(k=i-1;k>=1;k--)
		printf("%d",k);
		printf("\n");
	}
	for(i=1;i<r;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		for(k=1;k<=r-i;k++)
		printf("%d",k);
		for(z=k-2;z>=1;z--)
		printf("%d",z);
		printf("\n");
	}
}
