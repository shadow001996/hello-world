#include<stdio.h>
#include<stdlib.h>
typedef  struct node{
	int data;
	struct node* next;
}node;
node* newnode(node* head,int item)
{
	
	node* news=(node*)malloc(sizeof(struct node));
	news->data=item;
	if(head==NULL)
	{
		news->next=NULL;
		head=news;
		return head;
		}
	news->next=head;
	head=news;
	return head;
}
int main()
{
	node* head=NULL;
	head=newnode(head,1);
	head=newnode(head,2);
	head=newnode(head,5);
	head=newnode(head,2);
	head=newnode(head,1);
	int* p;
	p=(int*)malloc(5*sizeof(int));
	node* temp;
	temp=head;
	int i=0;
	while(temp!=NULL)
	{
		p[i++]=temp->data;
		temp=temp->next;
	}
	int n;
	n=i;
	for(i=0;i<n;i++)
	{
		if(p[i]!=p[n-i-1])
         		{
         			printf("it is not a palindrome");
         			exit(1);
				 }
				
	}
	printf("it is a palindrome");
	return 0;
}
