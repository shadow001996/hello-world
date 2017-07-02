#include<iostream>
using namespace std;
int factorial(int a)
{
	if (a=0)
	return 0;
	if(a!=1)
	return a*factorial(a-1);
	
}
int main()
{
	int t;
	cout<<"enter the number of rows";
	cin>>t;
	for(int i=0;i<t;i++)
	{
		for(int j=t-1;j>0;j--)
		cout<<" ";
		for(int j=0;j<i+1;j++)
		{
			cout<< factorial(i)/(factorial(j)*factorial(i-j));
		}
	}
	return 0;
}
