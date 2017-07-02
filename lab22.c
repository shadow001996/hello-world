#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	int t;
	printf("enter the number of elements you want: ");
	scanf("%d",&n);
	int* p;
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("enter the element you want to search in the given array: ");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		if(p[i]==t)
		{
			printf("element found at index: %d",i);
			break;
		}
	}
	return 0;
}

