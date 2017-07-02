#include<iostream>
using namespace std;

int main()
{
	int i,j,a[3][3],min;
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			cout<<"enter the temperature";
			cin>>a[i][j];
		}
	}
	
	int y,b,c,d;
	y=0,b=0,c=0,d=0;
	min=a[1][1];
	
	for(i=1;i<=3;i++)
	{
		
		for(j=1;j<=3;j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				y=i;
				b=j;
			}
			
		}
		
		cout<<y<<"day"<<"\n"<<"city"<<b;
	}
	
	
	
	
	
		
	}
	
	

