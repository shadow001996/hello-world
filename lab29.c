#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* insert(node* head,int item)
{
	node* news=(node*)malloc(sizeof(struct node));
	news->data=item;
	if(head==NULL)
	{
		head=news;
		news->next=NULL;
		return head;
	}
	else{
	
	news->next=head;
	head=news;
	return head;
   }    
}
void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	
}
void search(node* head,int item)
{
	node* temp=head;
	while(temp!=NULL)
	{
		if(temp->data==item)
		{
			printf("element found");
			break;
		}
		else
		temp=temp->next;
	}
}
int main()
{
	node* head=NULL;
	head=insert(head,1);
	head=insert(head,5);
	head=insert(head,7);
	head=insert(head,8);
	search(head,7);
	return 0;
}
