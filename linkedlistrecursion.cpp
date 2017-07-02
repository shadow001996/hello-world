#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void print(struct node* p)
{
	if(p==NULL)
	return;
	else{
	
	printf("%d",p->data);
	print(p->next);
}
}
struct node* insert(node* start, int info)
{
	node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=info;
	temp->next=NULL;
	if(start==NULL)
	start=temp;
	else
	{
		node* temp1=start;
		while(temp1->next!=NULL)
		temp1=temp1->next;
		temp1->next=temp;
		
	}
	return start;
}
int main()
{
	struct node* head=NULL;
	head= insert(head,5);
	head= insert(head,5);
	head= insert(head,7);
	head= insert(head,6);
	print(head);
	
	return 0;
}









	

