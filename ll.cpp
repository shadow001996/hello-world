#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

struct node* head;
void insert(int item)
{
	node* temp= (node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	if (head== NULL)
	head=temp;
	else
	{
		
		temp->next=head;
		head=temp;
	}
}
void print()
{
	struct node* temp=head;
	printf("the list is:");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
		
	}
}
	int main()
	{
		head=NULL;
		int n,x;
		printf("how many numbers u wanna insert");
		scanf("%d",&n);
		for( int i=0;i<n;i++)
		{
			printf("enter the element");
			scanf("%d",&x);
			insert (x);
			print();
		}
		return 0;
	}
	












