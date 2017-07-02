#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
bool ancestors(node* root,int target)
{
	if(root==NULL)
	return false;
	else if(root->data==target)
	return true;

	
	else if(ancestors(root->left,target)||ancestors(root->right,target))
		{
			printf("%d \n",root->data);
			return true;
			
		}
	
	else
	return false;
}
int main()
{

	node* root;
 	root=newnode(1);
 	root->left=newnode(2);
 	root->right=newnode(3);
 	root->left->left= newnode(4);
 	root->left->right=newnode(5);
 	root->left->left->left=newnode(7);
 	root->right->left=newnode(6);
 	inorder(root);
 	printf("the ancestors of 7 are: \n");
 	ancestors(root,7);
 	
 	
 	
 	
 return 0;	
 }
