#include<stdio.h>
#include<stdlib.h>
struct treenode
{
	int data;
	struct treenode *left;
	struct treenode *right;
	int height;
};
int height(struct treenode *n){
	if(n==NULL) 
	return 0;
	return n->height;
}
int max(int a,int b){
	return (a>b)?a:b;
}
struct treenode* newnode(int key)
{
	struct treenode* node=(struct treenode*)malloc(sizeof(struct treenode));
	node->data=key;
	node->left=NULL;
	node->right=NULL;
	node->height=1;
	return node;
}
struct treenode* rightrotation(struct treenode *y){
	struct treenode *x=y->left;
	struct treenode *T2=x->right;
	x->right=y;
	y->left=T2;
	
	y->height=max(height(y->left),height(y->right))+1;
	x->height=max(height(x->left),height(x->right))+1;
	return x;
}
struct treenode* leftrotation(struct treenode *x){
	struct treenode *y=x->right;
	struct treenode *T2=y->left;
	y->left=x;
	x->right=T2;
	x->height=max(height(x->left),height(x->right))+1;
	y->height=max(height(y->left),height(y->right))+1;
	return y;
}
int getheightdiff(struct treenode *n)
{
	if(n==NULL) return 0;
	else return height(n->left)-height(n->right);
}
struct treenode* insert(struct treenode* node,int key){
	if(node==NULL)
	{
		return newnode(key);
	}
	if(key<node->data)
	{
	node->left=insert(node->left,key);
    }
	else if(key>node->data){
	node->right=insert(node->right,key);
     }
     
	node->height=1+max(height(node->left),height(node->right));
	int heightdiff=getheightdiff(node);
	if(heightdiff>1&& key< node->left->data)
	{
		return rightrotation(node);
	}
	if(heightdiff< -1&& key> node->right->data)
	{
		return leftrotation(node);
	}
	if(heightdiff> 1&& key> node->left->data)
	{
		node->left=leftrotation(node->left);
		return rightrotation(node);
	}
	if(heightdiff< -1&& key<node->right->data)
	{
		node->right=rightrotation(node->right);
		return leftrotation(node);
	}
	return node;
}
void inorder(struct treenode *n){
	if(n!=NULL)
	{
		inorder(n->left);
		printf("%d ",n->data);
		inorder(n->right);
	}
}
void preorder(struct treenode *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct treenode *root) 
{ 
	if(root != NULL) 
	{ 
        postorder(root->left);  
		postorder(root->right);
        printf("%d ", root->data); 
	} 
} 
int main()
{
	struct treenode *root=NULL;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		root=insert(root,n);
	}
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
	postorder(root);
	return 0;
}

