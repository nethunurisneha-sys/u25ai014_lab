#include<stdio.h>
int main()
{
	int totsec,hr,min,sec;
	printf("enter total secs");
	scanf("%d",&totsec);
	hr=totsec/3600;
	totsec=totsec%3600;
	min=totsec/60;
	sec=totsec%60;
	printf("%dhr,%dmin,%dsec",hr,min,sec);
}
