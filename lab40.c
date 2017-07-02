#include<stdio.h>
#include<stdlib.h>
void insertion(int a[],int n)
{
	int i,key,j;
	
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}
void display(int a[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
 
int main()
{
	
	int a[]={10,7,8,9,1,5};
	int n;
	n=sizeof(a)/sizeof(a[0]);
	insertion(a,n);
	display(a,n);
	return 0;
	
}
