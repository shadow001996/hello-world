#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string j,s;
		int count=0;
		int lengthj,lengths;
		cin>>j>>s;
		lengthj=j.length();
		lengths=s.length();
		for(int l=0;l<lengths;l++)
		{
			for(int k=0;k<lengthj;k++)
			{
				if(j[k]==s[l]){
				
				count++;
				break;
			}
			}
		}
		cout<<count<<endl;
			}
			return 0;
}
