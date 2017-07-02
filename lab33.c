 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	int n,i,j;
 	int* p;
 	printf("enter the number of elements in the array: ");
 	scanf("%d",&n);
 	p=(int*)malloc(n*sizeof(int));
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&p[i]);
	 }
	 int item;
	 printf("enter the required product:");
	 scanf("%d",&item);
	 for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(p[i]*p[j]==item)
	 		{
	 			printf("%d %d",p[i],p[j]);
	 			return;
			 }
		 }
		 
	 }
	 return 0;
 }
