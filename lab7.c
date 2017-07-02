#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;
int min(int n,int m)
{
	if(m<n)
	return m;
	else
	return n;
}
int max(int n,int m)
{
	if(m>n)
	return m;
	else
	return n;
}
node* newnode(int item)
{
	node* news= (node*)malloc(sizeof(struct node));
	news->data=item;
	news->left=NULL;
	news->right=NULL;
	return news;
}
void inorder(node* root)
{
	if(root==NULL)
	return;
	else
	{
		inorder(root->left);
		printf("%d \n",root->data);
		inorder(root->right);
	}
}
node* ancestor(node* root,int n1,int n2)
{
	if(root->data>max(n1,n2))
	return (ancestor(root->left,n1,n2));
	else if(root->data<min(n1,n2))
	return (ancestor(root->right,n1,n2));
	else
	return root;
	
}
int main()
{
	node* root=NULL;
	root=newnode(10);
	root->left=newnode(8);
	root->left->left=newnode(6);
	root->left->right=newnode(9);
	root->right=newnode(30);
	root->right->right=newnode(60);
	root->right->left=newnode(25);
	inorder(root);
	printf("\n");
	node* temp;
	
	temp=ancestor(root,30,60);
	printf("the common ancestor is: %d",temp->data);
	return 0;
}
