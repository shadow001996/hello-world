#include<iostream>
using namespace std;

int main()
{
	int i,j,t,max;

int a[5];
cout<<"enter the numbers"<<"\n";
for(int i=0;i<5;i++)
 cin>>a[i];
//cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
//cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<"\n";
for(i=0;i<5;i++)
 cout<<a[i]<<"\t";
cout<<"\n";

for(i=0;i<4;i++)
{
    max=a[i];
    for(j=i+1;j<5;j++)
	{
		if (a[j]>max)
		{
		   max=a[j];
	    }
	}
	if(a[i]!=max)
	{
	  t=a[i];
	  a[i]=max;
	  max=t;
    }
}
for(i=0;i<5;i++)
 cout<<a[i]<<"\t";

//cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4];
return 0;

}

