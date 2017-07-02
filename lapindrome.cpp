#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char c,s[1001];
	char arr1[26]={0};
	char arr2[26]={0};
	int n,k;
	int sum;
		sum=0;
		scanf("%s",&s);
		n=strlen(s);
		for(int i=0;i<n/2;i++)
		{
			c=s[i];
			arr1[c-97]++;
		}
		if(n%2==0)
		k=n/2;
		else k=n/2+1;
		for(int i=k;i<n;i++)
		{
			c=s[i];
			arr2[c-97]++;
		}
		
		for(int i=0;i<26;i++)
		{
			if(arr1[i]==arr2[i])
			sum++;
		}
		if(sum==26)
		printf("YES \n");
		else
		printf("NO \n");
	}
return 0;
}
