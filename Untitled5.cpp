#include<iostream>
using namespace std;
int main()
{
	int t,l,d,dd,s,c,ll;
	cin>>t;
	while(t--)
	{
		cin>>l>>d>>s>>c;
		if(d!=1)
		while(s<l&&d>1)
		{
			s=s+s*c;
			d--;
		}
		if(s>=l)
		cout<<"ALIVE AND KICKING"<<endl;
		else
		cout<<"DEAD AND ROTTING"<<endl;
		
	}
	return 0;
}
