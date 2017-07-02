#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* push(node* head,int item)
{
	node* newnode=(node*)malloc(sizeof(struct node));
	newnode->next=head;
	head=newnode;
	newnode->data=item;
	return head;
}
void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		printf("%d \n",temp->data);
		temp=temp->next;
	}
}
void movenode(node* dest,node* source)
{
	struct node* newnode=source;
	source=newnode->next;
	newnode->next=dest;
	dest=newnode;
	
}
node* merge(node* a,node* b)
{
	node dummy;
	node* tail=&dummy;
	dummy.next=NULL;
	while(1)
	{
		if(a==NULL){
			
		
		tail->next=b;
		break;
	}
	if(b==NULL)
	{
		tail->next=a;
		break;
	}
		if(a->data<=b->data)
		movenode(tail->next,a);
		else
		movenode(tail->next,b);
		tail=tail->next;
	}
	return dummy.next;
}
int main()
{
	node* res=NULL;
	node* a=NULL;
	node* b=NULL;
	a=push(a,5);
	a=push(a,6);
	a=push(a,7);
	a=push(a,8);
	
	b=push(b,9);
	b=push(b,10);
	res=merge(a,b);
	display(res);
	return 0;
}
