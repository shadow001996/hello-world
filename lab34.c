#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p[50][50];
	int m,n;
	scanf("%d",&m);
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	int x,y;
	for(x=0;x<m/2;x++)
	{
		for(y=x;y<m-x-1;y++)
		{
			int temp;
			temp=p[x][y];
			p[x][y]=p[y][m-x-1];
			p[y][m-x-1]=p[m-1-x][m-1-y];
			p[m-1-x][m-1-y]=p[m-1-y][x];
			p[m-1-y][x]=temp;
			
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",p[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
