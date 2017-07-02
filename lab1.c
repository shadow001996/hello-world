#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p;
	int n;
	int t;
	
	printf("enter the number of elements in your array");
	scanf("%d",&n);
	p= (int*)malloc(n*sizeof(int));
	printf("enter the elements");
	int i;
	for(i=0;i<n;i++)
	{
	scanf("%d",&p[i]);	
	}
	printf("enter the sum you want");
	scanf("%d",&t);
	int count=0;
	int j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(p[i]+p[j]+p[k]==t)
				{
				
				count=count+1;
				printf("%d %d %d",p[i],p[j],p[k]);
				printf("\n");
			}
			}
		}
	}
	printf("the number of such triplets are: %d",count);
	return 0;
}
