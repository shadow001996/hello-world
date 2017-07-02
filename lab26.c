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
	printf("\n");
	int item;
	item=p[n-1];
	for(i=n-1;i>0;i--)
	{
		p[i]=p[i-1];
	}
	p[0]=item;
	for(i=0;i<n;i++)
	{
		printf("%d",p[i]);
	}
	return 0;
}
