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
void preorder(node* root)
{
	if(root==NULL)
	return;
	
	printf("%d \n",root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(node* root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	printf("%d \n",root->data);
	
}
int main()
{
		struct node* root=NULL;
	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
		printf("inorder: \n");
	inorder(root);
		printf("preorder: \n");
	preorder(root);
		printf("postorder: \n");
	postorder(root);
	return 0;
}
