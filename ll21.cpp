#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void insert(int item,int m)
{
	node* temp1= (node*)malloc(sizeof(struct node));
	temp1->data=item;
	temp1->next=NULL;
	if(m==1){
		temp1->next=head;
		head=temp1;
		return;
	}
	
	node* temp2=head;
	for(int i=0;i<m-2;i++)
	{
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
}

	void print()
{
	struct node* temp=head;
	printf("the list is:");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		printf("\n");
		temp=temp->next;
		
	}

	
}

int main()
{
	head=NULL;
	int x,n,m;
	printf("how many numbers u wanna enter \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	
	printf("enter the number \n");
	scanf("%d",&x);
	printf("enter the position");
	scanf("%d",&m);
	insert(x,m);
	print();
}
	return 0;
	}



