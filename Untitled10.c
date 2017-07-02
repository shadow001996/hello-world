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
	news->left=news->right=NULL;
	return news;
}
void inorder(node* root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d \t",root->data);
	inorder(root->right);
}
node* insert(node* root,int item)
{
	if(root==NULL)
	return newnode(item);
	else if(item<root->data)
	root->left=insert(root->left,item);
	else
	root->right=insert(root->right,item);
	return root;
}
node * minvalue(struct node* node)
{
    struct node* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
node* deletenode(node* root,int item)
{
	if(root==NULL)
	return root;
	if(item<root->data)
	root->left=deletenode(root->left,item);
	else if(item>root->data)
	root->right=deletenode(root->right,item);
	else
	{
		if(root->left==NULL)
		{
			node* temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			node* temp=root->left;
			free(root);
			return temp;
			
		}
		node* temp=minvalue(root->right);
		root->data=temp->data;
	root->right=deletenode(root->right,temp->data);
		
	}
}

int main()
{
	node* root=NULL;
	root=insert(root,50);
	root=insert(root,30);
	root=insert(root,20);
	root=insert(root,40);
	root=insert(root,70);
	root=insert(root,60);
	inorder(root);
	printf("\n");
	root=deletenode(root,30);
	inorder(root);
	return 0;
	
}
