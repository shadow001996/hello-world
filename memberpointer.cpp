#include<iostream>
using namespace std;
class base
{
	int m;
	/*int base::* ip;
	ip= &base::m;*/
	public:
		base(int x)
		{
			m=x;
		}
	/*	void show()
		{
			cout<<m;
		}*/
};
int main()
{
	base a(20);
	cout<<a.m;
	return 0;
}

