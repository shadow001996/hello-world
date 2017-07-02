#include<iostream>
#include<vector>
using namespace std;
int main()
{


int t;
int n,m,sum;

scanf("%d",&t);
for(int i=0;i<t;i++)
{
	scanf("%d%d",&n,&m);
	
	int a[n];
	for(int j=0;j<n;j++)
	scanf("%d",&a[j]);
	

	for(int mask=0;mask<(1<<n);mask++)
		{
			sum=0;
			for(int l=0;l<n;l++)
			{
				if(mask&(1<<l))
				sum+=a[l];
			}
			if(sum==m)
			break;
		
		}
		if(sum==m)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
}
return 0;
}


1






