#include<stdio.h>
int main()
{
	float units,charge;
	printf("enter the units of consumption");
	scanf("%f",&units);
	if(units>=0&&units<=200)
	charge=0.50*units;
	else if(units>200&&units<=400)
	charge=100+0.65*(units-200);
	else if(units>400&&units<=600)
	charge=230+0.80*(units-400);
	else
	charge=425+125*(units-600);
	printf("charges=%f",charge);
	
}
