#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
	
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int item)
{
	struct node* temp=(node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	if(front==NULL && rear==NULL)
	front=rear=temp;
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
void dequeue()
{
	struct node* temp1=front;
	if(front==NULL)
	return;
	else if(front==rear)
	front= rear= NULL;
	else
	{
	    front=front->next;
        
	}
	free(temp1);
}
void print()
{
	struct node* temp2=front;
	while(temp2!=NULL)
	{
		printf("%d",temp2->data);
		temp2=temp2->next;
	}
}
int main()
{
	enqueue(3);
	enqueue(5);
	print();
	printf("\n");
	enqueue(7);
	print();
	printf("\n");
	dequeue();
	print();
	return 0;
	
}







