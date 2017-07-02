#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void computelps(char *pattern,int m,int *lps)
{
	int index=0;
	lps[0]=0;
	int i=1;
	while(i<m)
	{
		if(pattern[i]==pattern[index]){
		
		lps[i]=index+1;
		index++;
		i++;
	}
	else
	{
		if(index!=0){
			index=lps[index-1];
		}
		else
		{
			lps[i]=0;
		i++;
		}
	}
	
	}
}
void kmpsearch(char *text,char *pattern,vector<int> &ans)
{
	int n=strlen(text);
	int m=strlen(pattern);
	int lps[m];
	computelps(pattern,m,lps);
	int i=0,j=0;
	while(i<n)
	{
		if(text[i]==pattern[j])
		{
			i++;
			j++;
			if(j==m)
			{
				ans.push_back(i-j);
				j=lps[j-1];
			}
			
		}
		else 
		{
			if(j!=0)
			j=lps[j-1];
			else
			i++;
		}
	}
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char text[1000001],pattern[1000001];
		scanf("%s %s",&text,&pattern);
		vector<int> ans;
		kmpsearch(text,pattern,ans);
		if(ans.size()==0)
		{
			cout<<"Not Found"<<endl;
			continue;
		}
		cout<<ans.size()<<endl;
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}
