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
int main()
{
	node* head=NULL;
	int n,i;
	int item;
	int g;
	head=insert(head,1);
	head=insert(head,5);
	head=insert(head,7);
	head=insert(head,8);
	printf("choose 1-insert at start \n 2-insert at last \n 3-insert at any position");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			{
			
			printf("enter the element you want to insert: ");
			scanf("%d",&item);
			head=insert(head,item);
			break;
		}
		case 2:
			{
				printf("enter the element you want to insert: ");
				scanf("%d",&item);
				node* temp=head;
				node* news=(node*)malloc(sizeof(struct node));
				news->data=item;
				news->next=NULL;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=news;
				break;
				
			}
			case 3:
				{
					printf("enter the element you want to insert: ");
				scanf("%d",&item);
				printf("enter the position at wwhich u want to insert: ");
				scanf("%d",&g);
				node* news=(node*)malloc(sizeof(struct node));
				news->data=item;
				node* temp=head;
				for(i=0;i<g-2;i++)
				{
					temp=temp->next;
				}
				news->next=temp->next;
				temp->next=news;
				break;
				}
				
	}
	display(head);
	return 0;
}
