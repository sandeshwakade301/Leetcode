#include<stdio.h>
int main()
{
	int a[5]={1,2,3},b[10],i,n;
	
	printf("enter limit :");
	scanf("%d",&n);
	
	printf("enter element :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		b[i]=a[i];
		b[i+3]=a[i];
	}
	
    n=n*2;
	for(i=0; i<n; i++)
	{
		printf("%d",b[i]);
	}
}
