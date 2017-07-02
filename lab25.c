#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p[50][50];
	int q[50][50];
	int m,n;
	int i,j;
	printf("enter the number of rows and columns you want: ");
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d ",&p[i][j]);
		}
	}
for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			q[i][j]=p[j][i];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",q[i][j]);
		}
	}
	return 0;
}
