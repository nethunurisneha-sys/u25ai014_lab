#include<stdio.h>
int main()
{
	int a[10],pos=0,neg=0,zero=0,i;
	printf("enter 10 elements");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		pos++;
		else if(a[i]<0)
		neg++;
		else
		zero++;
	}
	printf("total pos=%d,total neg=%d,total zero=%d",pos,neg,zero);
	
}
