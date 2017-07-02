#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p;
	int n,i;
	printf("enter the number of elements: ");
	scanf("%d ",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",p[i]);
	}
	for(i=0;i<n/2;i++)
	{
		int temp;
		temp=p[i];
		p[i]=p[n-i-1];
		p[n-i-1]=temp;
	}
	printf("after reversing:");
	for(i=0;i<n;i++)
	{
		printf("%d",p[i]);
	}
	return 0;
}
	
	
	
