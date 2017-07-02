#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;
node* newnode(int item){
	node* news=(node*)malloc(sizeof(struct node));
	news->data=item;
	news->left=NULL;
	news->right=NULL;
	return news;
}
void inorder(node* root){
	if(root==NULL)
	return;
	else
	{
		inorder(root->left);
		printf("%d \n",root->data);
		inorder(root->right);
			}
}
int finddiv(int p[],int data,int low,int high)
{
	int i;
	for(i=low;i<high;i++)
	{
		if(p[i]>data)
		break;
	}
	return i;
}
node* printtree(int p[],int low,int high)
{
	if(low>high)
	return NULL;
	node* root=NULL;
	root= newnode(p[low]);
	int divindex;
	divindex= finddiv(p,root->data,low+1,high);
	root->left=printtree(p,low+1,divindex-1);
	root->right=printtree(p,divindex,high);
	return root;
	
}
int main()
{
	int p[]={5,2,1,3,4,7,6,8};
	int size;
	size=sizeof(p)/sizeof(p[0]);
	node* root=NULL;
	
	root=printtree(p,0,7);
	inorder(root);
	return 0;
}
