#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* head=NULL;
void push(int item)
{
	node* newnode=(node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=head;
	head=newnode;
	
}
void display()
{
	node* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		printf("\t");
		temp=temp->next;
	}
}
void reverse()
{
	node* next;
	node* current;
	node* prev;
	prev=NULL;
	current =head;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		
	}
	head=prev;
}
int main()
{
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	display();
	printf("\n");
	reverse();
	display();
	return 0;
}
