#include<stdio.h>
int main()
{
	int a[10],i,start=0,end,n,temp;
	printf("size of array");
	scanf("%d",&n);
	printf("enter elements of array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	end=n-1;
	while(start<end)
	{
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
	printf("after reversing,elements of array:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
