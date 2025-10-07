#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		printf("%d",k);
		for(j=1;j<=2*i-3;j++)
		printf(" ");
		if(i==1)
		{
			for(k=2;k<=5;k++)
			printf("%d",k);
		}
		else
		{
			for(k=i;k<=5;k++)
			printf("%d",k);
		}
	printf("\n");
	}
	for(i=1;i<5;i++)
	{
		for(k=5;k>=5-i;k--)
		printf("%d",k);
		for(j=1;j<=7-2*i;j++)
		printf(" ");
		if(i==4)
		{
			for(k=2;k<=5;k++)
			printf("%d",k);
		}
		else
		{
			for(k=5-i;k<=5;k++)
			printf("%d",k);
		}
    printf("\n");
	}
}
