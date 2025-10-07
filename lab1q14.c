#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	if(ch>=0&&ch<=9)
	printf("given char is digit");
	else if(ch>='A'&&ch<='Z')
	printf("given char is capital letter");
	else if(ch>='a'&&ch<='z')
	printf("given char is small letter");
	else
	printf("given char is special character");
}
