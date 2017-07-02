#include<iostream>
using namespace std;
const int size=3;
template<class T>
class vector
{
	int *v;
	public:
		vector(T* a)
		{
			v= new T[size];
			for(int i=0;i<size;i++)
			v[i]=0;
			
		
	//	void vector(T* a)
		
			for(int i=0;i<size;i++)
			v[i]=a[i];
			
		}
		T operator*(vector &y)
		{
			T sum=0;
			for(int i=0;i<size;i++)
			{
			sum+=v[i]*y.v[i];
			
		}
		return sum;
			}
};
int main()
{
	int x[3]={1,2,3};
	int y[3]={4,5,6};
	vector<int> v1(x);
	vector<int> v2(y);

	int r=v1*v2;
	cout<<"r="<<r<<"\n";
	return 0;
}
