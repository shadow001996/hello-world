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
	printf("enter the element you want to insert at the back");
	scanf("%d",&t);
	p[n]=t;
	n=n+1;
	for(i=0;i<n;i++)
	{
		printf("%d \n",p[i]);
	}
	
}
