#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;
node* newnode(int item)
{
	node* news=(node*)malloc(sizeof(struct node));
	news->data=item;
	news->left=NULL;
	news->right=NULL;
	return news;
	
}
void inorder(node* root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
}
int heightcal(node* root)
{
	if(root==NULL)
	return 0;
	int lheight,rheight;
	lheight=heightcal(root->left);
	rheight=heightcal(root->right);
	if(lheight>rheight)
	return(lheight+1);
	else
	return(rheight+1);
}
int main()
{
	node* root=NULL;
	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	int height;
	inorder(root);
	height=heightcal(root);
	printf("\n height is: %d",height);
	return 0;
	
}
