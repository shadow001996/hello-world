#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<string,int> mp;
	int count=1;
	while(n--)
	{
		
		string str;
		cin>>str;
		mp[str]++;
		
		if(count==mp[str])
		{
			cout<<count<<" "<<str<<endl;
			count++;
		}
		
	}
	return 0;
}
