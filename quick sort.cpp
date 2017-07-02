#include<iostream>
using namespace std;
partition(*p,start,end)
{
	pivot= p[end];
	pindex= start;
	for(i=start;i<end;i++)
	{
		if(p[i]<=pivot)
		{
			temp=p[i];
			p[i]=p[pindex];
			p[index]=temp;
			pindex=pindex+1;
		}
	}
	temp=p[pivot];
	p[pivot]=p[pindex];
	p[pindex]=temp;
	return pindex;
}
quicksort(int *p, int start,int end)
{
	
}
int main()
{
	int p={7 6 8 9 1 2 4 3};
	quicksort(p,0,7);
	for(int i=0;i<8;i++)
	{
		cout<<p[i];
	}
	return 0;
	
}
