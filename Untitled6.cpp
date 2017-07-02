#include<iostream>
#include<string.h>
using namespace std;
class person
{
	int age;
	char* name;
	public:
		person(char* s,int m)
		{
			int len=strlen(s);
			name= new char(len);
			strcpy(name,s);
			age=m;
		}
		void display()
		{
			cout<<age<<endl;
			cout<<name;
		}
		person greater(person &x)
		{
			if(x.age>=age)
			return x;
			else
			return *this;
		 } 
};
int main()
{
	person p1("john",37),p2("ahmed",50);
	person p=p1.greater(p2);
	p.display();
	return 0;
}
