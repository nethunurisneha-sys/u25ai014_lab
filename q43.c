#include<stdio.h>
int main()
{
	float sales,com;
	printf("enter the sales:Rs");
	scanf("%f",&sales);
	if(sales<=500)
	com=0.05*sales;
	else if(sales>500&&sales<=2000)
	com=35+0.1*(sales-500);
	else if(sales>2000&&sales<=5000)
	com=185+0.12*(sales-2000);
	else
	com=0.125*sales;
	printf("commision=%f",com);
}
