#include<stdio.h>
int main()
{
	int n1=0,n2=1,n;
	printf("%d\n%d\n",n1,n2);
	while(n1<=20)
	{
		n=n1+n2;
		n1=n2;
		n2=n;
		printf("%d\n",n);
	}
}
	

