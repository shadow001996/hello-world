#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}node;
node* newnode(int item)
{
	node* news=(node*)malloc(sizeof(struct node));
	news->data=item;
	news->left=news->right=NULL;
	return news;
}
void inorder(node* root){
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d \n",root->data);
	inorder(root->right);
}
node* insert(node* root,int item)
{
	if(root==NULL)
	return newnode(item);
	
	if(item<root->data)
	root->left=insert(root->left,item);
    else if(item>root->data)
	root->right=insert(root->right,item);
	return root;
}
void search(node* root,int item)
{
	if(root==NULL)
	return;
	else if(root->data==item)
	{
		printf("found element!");
		return;
	}
	
	else
	if(item<root->data)
	search(root->left,item);
	else
	search(root->right,item);
}
int main()
{
	
	struct node* root=NULL;
	root=insert(root,50);
	root=insert(root,30);
	root=insert(root,20);
	root=insert(root,40);
	root=insert(root,70);
	root=insert(root,60);
	inorder(root);
	search(root,40);
	return 0;
	
}
