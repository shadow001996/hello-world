#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}node;
int height(node* root)
{
	if(root==NULL)
	return 0;
	else
	{
		int lheight=height(root->left);
		int rheight=height(root->right);
		if(lheight>=rheight)
		return(lheight+1);
		else
		return (rheight+1);
	}
}
node* newnode(int item)
{
	node* news= (node*)malloc(sizeof(struct node));
	news->data=item;
	news->left=NULL;
	news->right=NULL;
	return news;
}


void printGivenLevel(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}
void printlevelorder(node* root)
{	
int h;
h= height(root);
int i;
for(i=1;i<=h;i++)
{

	printGivenLevel(root,i);
	printf("\n");
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
 	printlevelorder(root);
 	return 0;
 	
 }


















