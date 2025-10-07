#include<stdio.h>
int main()
{
	char ch;
	int a,b,res;
	printf("enter the operator");
	scanf("%c",&ch);
	printf("enter num1");
	scanf("%d",&a);
	printf("enter num2");
	scanf("%d",&b);
	switch(ch)
	{
		case'+':res=a+b;
		printf("%d",res);
		break;
		case'-':res=a-b;
		printf("%d",res);
		break;
		case'*':res=a*b;
		printf("%d",res);
		break;
		case'/':res=a/b;
		printf("%d",res);
		break;
		default:
			printf("invalid operation");
	}
}
