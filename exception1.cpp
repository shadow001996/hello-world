#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter the numbers";
	cin>>x>>y;
	try
	{
		if(x!=0)
		{
			int d=y/x;
			cout<<d<<endl;
			cout<<"no exception found";
		}
	/*	else if(x==0)
		{
			throw(x);
		}*/
	}
	catch(int)
	{
		cout<<"exception has been caught,kindly dont use zero for dividing any number";
	}
	return 0;
}
