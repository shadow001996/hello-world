#include<iostream>
using namespace std;

class code
{
  int id;
  public:
  	code();
  	code(int a);
  	code(code &x)
  	{
  		id=x.id;
	  }
	  void display(void)
	  {
	  	cout<<id;
	  }
	
};
int main()
{
	code A(100);
	code B(A);
	code C=A;
	code D;
	D=A;
	
	cout<<"/n id of A:";A.display();
	
}

