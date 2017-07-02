#include<stdio.h>
#include<stdlib.h>
 struct node{
	int roll;
	char name[50];
	int gpa;
}a;
int main()
{
	printf("enter the roll number: \n");
	scanf("%d",&a.roll);
	printf("enter the gpa \n");
	scanf("%d",&a.gpa);
	printf("enter the name: \n");
	scanf("%s ",&a.name);
	printf("%d \n",a.roll);
	printf("%d \n",a.gpa);
	printf("%s \n",a.name);
	return 0;
}
