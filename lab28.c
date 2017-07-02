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
	for(i=0;i<n;i++)
	{
		if(p[i]>p[i+1])
		{
			printf("array is not sorted");
			break;
		}
	}
	return 0;
}
