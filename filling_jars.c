#include<stdio.h>
int main()
{
	int i,m,a,b,k;
	float total_candies=0.0,n,avg;
	printf("enter no.of jars");
	scanf("%f",&n);
	printf("enter no.of operations");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("enter a ");
		scanf("%d",&a);
		printf("enter b");
		scanf("%d",&b);
		printf("enter k");
		scanf("%d",&k);
		total_candies=total_candies+k*(b-a+1);
	}
	avg=total_candies/n;
	printf("%f",avg);
}
