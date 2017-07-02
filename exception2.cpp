#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
	if((x-y)!=0)
	{
		int d=z/(x-y);
		cout<<d;
	}
	if((x-y)==0)
	{
		throw(x);
	}
}
int main()
{
	try{
	divide(7,7,10);
}
catch(...)
{
	cout<<"the exception has been caught";
}
return 0;	
}
