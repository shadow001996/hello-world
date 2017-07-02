#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int p[5];
	for(int i=0;i<5;i++)
	p[i]=i;
	reverse(p,p+5);
	for(int i=0;i<5;i++)
	cout<<p[i];
	return 0;
}
