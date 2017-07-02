#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	int a[n+1];
	for(int i=2;i<=n;i++)
	a[i]=i;
	for(int p=2;p*p<=n;p++)
	{
		if(a[p]!=0)
		{
			for(int j=2*p;j<=n;j=j+p)
			a[j]=0;
		}
	}
	int sum=5;
	int count=0;
	for(int i=5;i<=n;i=i+2)
	{
		if(a[i]!=0&&a[i]==sum||a[i]==-1)
		count=count+1;
		if(a[i]==-1||a[i]!=0)
		{
			sum=sum+i;
			if(a[sum]!=0)
			a[sum]=-1;
		}
	}
	cout<<count<<endl;
	return 0;
}
