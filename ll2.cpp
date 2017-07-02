#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void insert(int item,int m,node* head)
{
	node* temp=(node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
	node* temp1= head;
	while(temp1->next!=m)
	temp1=temp1->next;
	temp->next=temp1->next;
	temp1->next=temp;
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
int main()
	{
		head=NULL;
		int n,x;
		printf("how many numbers u wanna insert");
		scanf("%d",&n);
		
		printf("where u want to insert");
		scanf("%d",&m);
		for( int i=0;i<n;i++)
		{
			printf("enter the element");
			scanf("%d",&x);
			insert (x,m,head);
			print();
		}
		return 0;
	}
