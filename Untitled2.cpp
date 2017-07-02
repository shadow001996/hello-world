#include<iostream>
#include<vector>
using namespace std;
vector<int> graph[10001];
int vis[10001];
int count=0;
void dfs(int a)
{
	if(vis[a]==1)
		{
			return;
			
		}
	vis[a]=1;
	count++;
	for(int i=0;i<graph[a].size();i++)
	{
		int v=graph[a][i];
		dfs(v);
	}
	
}
int main()
{
	int n,m;
	cin>>n>>m;
for(int i=1;i<=n;i++)
vis[i]=0;
int x,y;

for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	    
	}
	dfs(1);
if(m!=n-1)
cout<<"NO"<<endl;

   else	 if(count!=n)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
	
	return 0;
}
