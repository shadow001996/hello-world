#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	for(int i=1;i<=20;++i)
	{
		cout<<(1+rand()%6);
		if(i%5==0)
		cout<<"\n";
		
	}
}
