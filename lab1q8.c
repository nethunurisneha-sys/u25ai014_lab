#include<stdio.h>
int main()
{
	int hrs,mins,secs,totsecs;
	printf("enter hrs");
	scanf("%d",&hrs);
	printf("enter mins");
	scanf("%d",&mins);
	printf("enter secs");
	scanf("%d",&secs);
	totsecs=(hrs*3600)+(mins*60)+secs;
	printf("totsecs=%d",totsecs);
}
