#include<iostream>
using namespace std;
class B
{
	int a;
	public:
		int b;
		void get_ab();
		int get_a();
		void show_a();
};
class D: private B
{
	int c;
	public:
		void mul();
		void display();
};
void B::get_ab()
{
	cout<<"enter the numbers a and b";
	cin>>a>>b;
	
}
int B::get_a()
{
	return a;
}
void B::show_a()
{
	cout<<"a="<<a<<"\n";
}
void D::mul()
{
	get_ab();
	c=b*get_a();//a cannot be used directly

}
void D::display()
{
	show_a();
	cout<<"b="<<b<<"\n";
	cout<<"c="<<c<<"\n";
}
int main()
{
	D d;
	d.mul();
	d.display();
	
}









