#include<stdio.h>
#include<stdlib.h>
void heapify(int a[],int n,int i)
{
	int largest;
	largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n&&a[l]>a[largest])
	largest=l;
	if(r<n&&a[r]>a[largest])
	largest=r;
	if(largest!=i)
	{
		int temp;
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		heapify(a,n,largest);
	}
}
void heapsort(int a[],int n)
{
	int i;
	for(i=n/2-1;i>0;i--)
	heapify(a,n,i);
	for(i=n-1;i>=0;i--)
	{
		int temp;
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapify(a,n,0);
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
int main()
{
	int a[]={5,7,10,8,9,1,3};
	int n;
	n=sizeof(a)/sizeof(a[0]);
	heapsort(a,n);
	display(a,n);
}
