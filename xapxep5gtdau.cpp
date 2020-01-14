#include<stdio.h>
main()
{
	int a[100];
	int n,i,j,t;
	printf("input size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
for(i=0;i<5;i++)
for(j=4;j>i;j--)
if(a[j]<a[j-1])
{
	    t=a[j];
		a[j]=a[j-1];
		a[j-1]=t;
}
for(i=0;i<n;i++)
printf("%d",a[i]);

	
}
