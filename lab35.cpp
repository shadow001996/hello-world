#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* push(node* head,int item)
{
	node* news=(node*)malloc(sizeof(struct node));
	news->data=item;
	news->next=head;
	head=news;
	return news;
}
node* pop(node* head)
{
	int data;
	data=head->data;
	head=head->next;
	return head;
}
void display(node* head)
{
	node* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d \n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	node* head=NULL;
	head=push(head,3);
	head=push(head,4);
	head=push(head,5);
	head=push(head,6);
	head=push(head,7);
	head=pop(head);
	display(head);
	return 0;
	
}

