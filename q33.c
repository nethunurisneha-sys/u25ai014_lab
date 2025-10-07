#include<stdio.h>
int main()
{
	int i,j,n,temp;
	printf("enter no.of elements");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("max num=%d",a[n-1]);
	printf("min num=%d",a[0]);
}
