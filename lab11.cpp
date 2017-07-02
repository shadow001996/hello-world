#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	printf("enter the number of elements :");
	int n;
	int i,j;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&p[i]);
	}
	printf("enter the required sum");
	int sum;
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i]+p[j]==sum)
			{
				printf("the elements are: %d %d",p[i],p[j]);
				return 0;
			}
		}
	}
	return 0;
	
}
