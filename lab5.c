#include<stdio.h>
#include<stdlib.h>
int sum;
typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}node;
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
void mirror(node* root){
	if(root==NULL)
	return;
	else
	{
		node* temp;
		mirror(root->left);
		mirror(root->right);
		
		temp=root->left;
		root->left=root->right;
		root->right=temp;
		
		
	}
}
int main()
{
	node* root;
 	root=newnode(1);
 	root->left=newnode(2);
 	root->right=newnode(3);
 	root->left->left= newnode(4);
 	root->left->right=newnode(5);
 	printf("inorder before mirror image");
 	printf("\n");
 	inorder(root);
 	mirror(root);
	 printf("inorder after mirror image");
 	printf("\n");
 	inorder(root);
 	
 	return 0;
}
