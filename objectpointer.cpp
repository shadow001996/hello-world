#include<iostream>
using namespace std;
class item
{
	long int code;
	double price;
	public:
	void get_data(int x,float y)
	{
		code=x;
		price=y;
	}
	void show_data()
	{
		cout<<"code="<<code<<"\n";
		cout<<"price="<<price<<"\n";
	}
};
const int size=2;
int main()
{
	item *p=new item[size];
	item *d=p;
	long int x;
	int i;
	double y;
	for(i=0;i<2;i++)
	{
		cout<<"input code and price for the item";
		cin>>x;
		cin>>y;
		p->get_data(x,y);
		p++;
	}
	for(i=0;i<2;i++)
	{
		cout<<"item"<<i+1<<"\n";
		d->show_data();
		d++;
	}
	return 0;
	
}
