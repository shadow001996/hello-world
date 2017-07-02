#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		long long int count=0;
		for(int i=1;i<=n;i++)
		{
			if(i>=k)
			continue;
			
			else if(i<k){
						for(int j=1;j<=i;j++)
			{
				if((i+j)<=k)
				count++;
			}
		}
		}
		cout<<count<<endl;
	}
	return 0;
}
