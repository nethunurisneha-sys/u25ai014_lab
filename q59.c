#include<stdio.h> 
int main()
{
	int a[10],b[10],c[10],i;
	printf("enter elements of first array");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("enter elements of sec array");
	for(i=0;i<10;i++)
	scanf("%d",&b[i]);
	for(i=0;i<10;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<10;i++)
	printf("%d\t",b[i]);
}
