#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	printf("enter the number of elements :");
	int n;
	int i,j;
	int count;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		count=1;
		
		for(j=i+1;j<n;j++)
		{
			if(p[i]==p[j])
			count=count+1;
		}
		
		if(count%2!=0)
		{
			printf("%d",p[i]);
			break;
		}
	}
	
	return 0;
}
