#include<stdio.h>
#include<stdlib.h>
void swap(int* p,int* q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
	
}
int partition(int a[],int low,int high)
{
	int pivot;
	pivot=a[high];
	int i;
	i=low-1;
	int j;
	for(j=low;j<high;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(&a[i],&a[j]);
			
			
		}
		
	}
	swap(&a[i+1],&a[high]);
	return (i+1);
}
void quicksort(int a[],int low,int high)
{
	int ip;
	if(low<high)
	{
	
	
	ip=partition(a,low,high);
	quicksort(a,ip+1,high);
	quicksort(a,low,ip-1);
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
	quicksort(a,0,n-1);
	display(a,n);
	return 0;
	
}
