#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* insert(node* head,int item)
{
	node* newnode= (node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		newnode->data=item;
		newnode->next=NULL;
		head=newnode;
	}
	else{
	
	newnode->data=item;
	newnode->next=head;
	head=newnode;
}
	return head;
	
}
void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		printf("\n");
		temp=temp->next;
	}
}
int main()
{
	node* head=NULL;
	int n=1;
	int count=0;
	int item;
	while(n){
		printf("enter the element");
		scanf("%d",&item);
		head=insert(head,item);
		printf("for more enter 1 or to stop enter 0");
		scanf("%d",&n);
		count++;
	}
	display(head);
	printf("number of elements are: %d",count);
	int p[count];
	int i=0;
	node* temp=head;
	while(temp!=NULL)
	{
		p[i++]=temp->data;
		temp=temp->next;
	}
	printf("\n");
	printf("the middle element of the linked list is: %d \n",p[count/2]);
}

