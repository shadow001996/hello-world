#include<iostream>
using namespace std;
int main()
{
	int n,temp,j,count=0;
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=1;i<=n;i++){
	
	cin>>a[i];
	b[i]=0;
     }
     for(int i=1;i<=n;i++)
     {
     	if(b[i]==0)
     	{
     		j=i;
     		cout<<j;
     		
     		while(b[j]==0)
     		{
     			b[j]=1;
     		temp=a[j];
     		cout<<temp;
     		
     		j=a[j];
			 	 }
			 	 count++;
			 	 cout<<"\n";
		 }
	 
	}
	 cout<<count<<endl;
    return 0;
}
