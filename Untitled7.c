#include<stdio.h>
#include<stdlib.h>
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
int getmax(int a[],int n)
{
	int m,i;
	m=a[0];
	for(i=1;i<n;i++)
	{
		if(m<a[i])
		m=a[i];
	}
	return m;
}
void countsort(int a[],int exp,int n)
{
	int i;
	int output[n];
	int count[10]={0};
	for(i=0;i<n;i++)
	count[(a[i]/exp)%10]++;
	for(i=1;i<10;i++)
	{
		count[i]+=count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		output[count[(a[i]/exp)%10]-1]=a[i];
		count[(a[i]/exp)%10]--;
	}
	for(i=0;i<n;i++)
	a[i]=output[i];
	
}
void radix(int a[],int n)
{
	int m;
	m=getmax(a,n);
	int exp;
	for(exp=1;m/exp>0;exp*=10)
	countsort(a,exp,n);
}
int main()
{
	int a[]={5,7,10,8,9,1,3};
	int n;
	n=sizeof(a)/sizeof(a[0]);
	radix(a,n);
	display(a,n);
	return 0;
}
