#include<stdio.h>
#include<stdlib.h>
int getmax(int a[],int n)
{
	int max,i;
	max=a[0];
	for(i=0;i<n;i++)
	if(a[i]>max)
	max=a[i];
	return max;
}

void countsort(int a[],int n,int exp)
{
	 int output[n]; 
    int i, count[10] = {0};
 for (i = 0; i < n; i++)
        count[ (a[i]/exp)%10 ]++;
  for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 for (i = n - 1; i >= 0; i--)
    {
        output[count[ (a[i]/exp)%10 ] - 1] = a[i];
        count[ (a[i]/exp)%10 ]--;
    }
 for (i =0; i < n; i++)
        a[i] = output[i];

}
void radixsort(int a[],int n)
{
	int m;
	m=getmax(a,n);
	int exp;
	for(exp=1;m/exp>0;exp*=10)
	countsort(a,n,exp);
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	 int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixsort(arr, n);
    print(arr, n);
    return 0;
}
