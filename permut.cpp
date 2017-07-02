#include<iostream>
using namespace std;
int main()
{
	int t,n,count1,count2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		count1=count2=0;
		for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			if(a[i]>a[j])
			count1++;
		}
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			count2++;
		}
		if(count1==count2)
		printf("YES \n");
		else
		printf("NO \n");
	}
	return 0;
}
