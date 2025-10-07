#include<stdio.h>
int main()
{
	int n,exp,res;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the exponent");
	scanf("%d",&exp);
	res=1;
	while(exp!=0)
	{
	  res=res*n;
	  exp=exp-1;
    }
    printf("%d",res);
     
	
}
