#include<stdio.h>
int main()
{
	char ch,num;
	printf("enter a character");
	scanf("%c",&ch);
	num=ch>='a'&&ch<='b'?1:2;
	if(num==1)
	printf("small case letter");
	else
	printf("not small case letter");
}
