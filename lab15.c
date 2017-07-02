#include<stdio.h>
#include<stdlib.h>
#define MAX 256
int main()
{
	int input[MAX][2],output[MAX][2];
	int n;
	int count;
	int i,j;
	int k=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("enter the value \n");
    	scanf("%d",&input[i][0]);
    	input[i][1]=0;
	}
	for(i=0;i<n;i++)
	{
		count=0;
		if(input[i][1]==1)
		continue;
		for(j=i+1;j<n;j++)
		{
			if(input[j][0]==input[i][0])
			{
				count++;
				input[j][1]=1;
			}
		}
		output[k][0]=input[i][0];
		output[k][1]=count+1;
		k++;
	}
	n=k;
	printf("Array Elements and its frequency:\n");
        printf(" Data   Frequency\n");
        for (i = 0; i < n; i++) {
                printf("   %d     %d \n", output[i][0], output[i][1]);
        }
        int temp;
for(i=0;i<n-1;i++)
{
	temp=output[i][1];
	for(j=i+1;j<n;j++)
	{
		if(temp<output[j][1])
		{
			temp=output[j][1];
			output[j][1]=output[i][1];
			output[i][1]=temp;
			
			temp=output[j][0];
			output[j][0] = output[i][0];
                                output[i][0] = temp;
		}
	}
}
 printf("\nSorted Array Elements based on their frequency:\n");
        printf(" Data   Frequency\n");
        for (i = 0; i < n; i++) {
                printf("   %d    %d    \n", output[i][0], output[i][1]);
        }
	
	return 0;
	
	
}

