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
int pop()
{
	int res;
	node* temp;
	if(head==NULL)
	{
		printf("error");
		return 0;
	}
	temp=head;
	head=head->next;
	res=temp->data;
	free (temp);
	return res;
}
void reverse()
{
	int x;
	while(head!=NULL){

	x=pop();
	printf("%d",x);
}
}
int main()
{
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	printf("%d",pop());
	reverse();
//	printf("%d",pop());
	return 0;
	
}






