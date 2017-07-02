#include<iostream>
using namespace std;
class student
{
	protected:
	int roll_number;
	public:
		void get_number(int a)
		{
			roll_number=a;
	}
	void put_number()
	{
		cout<<roll_number<<"\n";
	}
			
		
};
class test: virtual public student
{
	protected:
		int mark1,mark2;
		public:
			void get_marks(float a, float b)
			
			{
				mark1=a;
				mark2=b;
			}
	        void put_marks()
	        {
	        	cout<<mark1<<"\n"<<mark2<<"\n";
	    }
	};
	class marks:public test
	{
		protected:
		int	marks_total;
			public:
				
				void display()
				
				{
					marks_total=mark1+mark2;
					cout<<"the total marks is:"<<marks_total;
				}
	};
	int main()
	
	{
		marks m;
		m.get_number(1556);
		m.put_number();
		m.get_marks(56,67);
		m.put_marks();
		m.display();
		return 0;
	}










