#include<stdio.h>
int main()
{
	float a,b,c,d,e,t,per;
	printf("enter marks in first sub");
	scanf("%f",&a);
	printf("enter marks in sec sub");
	scanf("%f",&b);
	printf("enter marks in third sub");
	scanf("%f",&c);
	printf("enter marks in fourth sub");
	scanf("%f",&d);
	printf("enter marks in fif sub");
	scanf("%f",&e);
	printf("enter total marks");
	scanf("%f",&t);
	per=(a+b+c+d+e)/t*100;
	if(per>=70)
	printf("first div");
	else if(per>=40&&per<70)
	printf("sec div");
	else
	printf("third div");
	
}
