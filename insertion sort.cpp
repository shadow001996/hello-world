#include<iostream>
using namespace std;
int main()
{
	int *p;
	int n,value,hole;
	p=new int[n];
	cout<<"enter the number of elements in the array";
	cin>>n;
	cout<<"enter the elements";
	for(int i=0;i<n;i++)
	
		cin>>p[i];
		for(int i=0;i<n;i++)
		cout<<p[i]<<"\t";
		cout <<"\n";
		
    for(int i=1;i<n;i++)
    {
    	value=p[i];
    	hole=i;
    	while(hole>0 && p[hole-1]>value)
    	{
    		p[hole]=p[hole-1];
    		hole=hole-1;
		}
		p[hole]=value;
	}
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<"\t";
	}
}
