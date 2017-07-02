
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* push(node* head,int item)
{
node* newnode= (node*)malloc(sizeof(struct node));
newnode->data=item;
newnode->next=head;
head=newnode;
return head;	
}
void display(node* head){
	node* temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		printf("\t");
		temp=temp->next;
	}
}
void MoveNode(node* destRef,node* sourceRef)
{
    
    node* newNode = sourceRef;
    
 
    
    sourceRef = newNode->next;
 
    
 
    
    destRef = newNode;
}
 
node* mergesort(node* a, node* b)
{
	node dummy;
	node* tail=&dummy;
	dummy.next=NULL;
	while(1)
	{
		
		if(a==NULL){
		
		tail->next=b;
		return;
	    }
		if(b==NULL){
			tail->next=a;
			return;
		}
		if(a->data<b->data)
		MoveNode(tail->next,a);
		if(a->data>b->data)
		MoveNode(tail->next,b);
		tail=tail->next;
	}
		
	
		
	
		return (dummy.next);
	}


int main()
{
	node* head1=NULL;
	head1=push(head1,10);
	head1=push(head1,8);
	head1=push(head1,6);
	head1=push(head1,4);
	head1=push(head1,2);
	
	node* head2=NULL;
	node* result=NULL;
		head2=push(head2,9);
	head2=push(head2,7);
	head2=push(head2,5);
	head2=push(head2,3);
	head2=push(head2,1);
	
	display(head1);
	printf("\n");
	display(head2);
	printf("\n");
	result=mergesort(head1,head2);
	printf("the new sorted list is");
	display(result);
	return 0;
	
}
