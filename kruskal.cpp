#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#define pp pair<int,int> 
using namespace std;
vector<pair<int,pp> > v;
int root[1000001];
int rank[1000001];
int find(int x)
{
	while(root[x]!=x)
	{
		x=root[x];
	}
	return x;
}
void union_f(int x,int y)
{
	if(rank[x]>rank[y])
	root[y]=x;
	else if(rank[y]>rank[x])
	root[x]=y;
	else
	{
		root[x]=y;
		rank[y]++;
	}
}
int main()
{
	int t,e,z,y;
	cin>>t;
	while(t--)
	{
		int n,ans=0;
		cin>>n;
		string dump;
		for(int i=0;i<n;i++)
		{
			root[i]=i;
			rank[i]=0;
		cin>>dump>>e;	
		while(e--)
		{
			cin>>y>>z;
			v.push_back(make_pair(z,make_pair(i,y)));
			}
		}
		sort(v.begin(),v.end());
		int size=v.size();
		for(int i=0;i<size;i++)
		{
			pair<int,pp> t=v[i];
			int a,b,c;
			a=t.first;
			b=t.second.first;
			c=t.second.second;
			if(find(b)!=find(c))
			{
				ans=ans+a;
				union_f(find(b),find(c));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
