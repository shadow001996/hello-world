#include<iostream>
using namespace std;

class sample
{
	int a;
	 int b;
	public:
	sample(int x,int y);
	friend float mean(sample s);
	 
};
float mean(sample s)
{
	return float (s.a+s.b)/2;
}
 sample::sample(int x,int y) //constructor defined
 {
 	a=x;
 	b=y;
 }

int main()
{
	sample X(25,40);
	
	cout<<"mean="<<mean(X)<<"\n";
}



