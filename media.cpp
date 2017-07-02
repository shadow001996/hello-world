#include<iostream>
#include<string.h>
using namespace std;
class media
{
	protected:
		char title[50];
		float price;
		public:
			media(char *s, float a)
			{
				strcpy(title,s);
				price=a;
			}
			virtual void display()
			{ }
};
class book: public media
{
	int pages;
	public:
	void display();
	book(char *s,float a, int p):media(s,a)
	{
		pages=p;
	}
};
class tape:public media
{
	float time;
	public:
		tape(char *s,float a,float t):media(s,a)
		{
			time=t;
		}
		void display();
};
void book::display()
{
	cout<<"\n title:"<<title;
	cout<<"\n pages:"<<pages;
	cout<<"\n price:"<<price;
}
void tape :: display ()
	{
		cout<<"\n title:"<<title;
		cout<<"\n play time:"<<time<<"mins";
		cout<<"\n price:"<<price;
	}
	int main()
	{
		char *title;
		float price,time;
		int pages;
		cout<<
	}
	
	
	

