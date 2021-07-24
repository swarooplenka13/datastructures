#include <stdio.h>
#include <stdlib.h>
struct node {
	int d; // data
	int c; // 1-red, 0-black
	struct node* p; // parent
	struct node* r; // right-child
	struct node* l; // left child
};
struct node* root = NULL;
struct node* bst(struct node* trav,struct node* temp)
{
	
	if (trav == NULL)
		return temp;
	if (temp->d < trav->d)
	{
		trav->l = bst(trav->l, temp);
		trav->l->p = trav;
	}
	else if (temp->d > trav->d)
	{
		trav->r = bst(trav->r, temp);
		trav->r->p = trav;
	}
	return trav;
}
void rightrotate(struct node* temp)
{
	struct node* left = temp->l;
	temp->l = left->r;
	if (temp->l)
		temp->l->p = temp;
	left->p = temp->p;
	if (!temp->p)
		root = left;
	else if (temp == temp->p->l)
		temp->p->l = left;
	else
		temp->p->r = left;
	left->r = temp;
	temp->p = left;
}
void leftrotate(struct node* temp)
{
	struct node* right = temp->r;
	temp->r = right->l;
	if (temp->r)
		temp->r->p = temp;
	right->p = temp->p;
	if (!temp->p)
		root = right;
	else if (temp == temp->p->l)
		temp->p->l = right;
	else
		temp->p->r = right;
	right->l = temp;
	temp->p = right;
}
void fixup(struct node* root, struct node* pt)
{
	struct node* parent_pt = NULL;
	struct node* grand_parent_pt = NULL;

	while ((pt != root) && (pt->c != 0)	&& (pt->p->c == 1))
	{
		parent_pt = pt->p;
		grand_parent_pt = pt->p->p;

		/* Case : A
			Parent of pt is left child
			of Grand-parent of
		pt */
		if (parent_pt == grand_parent_pt->l)
		{

			struct node* uncle_pt = grand_parent_pt->r;

			/* Case : 1
				The uncle of pt is also red
				Only Recoloring required */
			if (uncle_pt != NULL && uncle_pt->c == 1)
			{
				grand_parent_pt->c = 1;
				parent_pt->c = 0;
				uncle_pt->c = 0;
				pt = grand_parent_pt;
			}

			else {

				/* Case : 2
					pt is right child of its parent
					Left-rotation required */
				if (pt == parent_pt->r) {
					leftrotate(parent_pt);
					pt = parent_pt;
					parent_pt = pt->p;
				}

				/* Case : 3
					pt is left child of its parent
					Right-rotation required */
				rightrotate(grand_parent_pt);
				int t = parent_pt->c;
				parent_pt->c = grand_parent_pt->c;
				grand_parent_pt->c = t;
				pt = parent_pt;
			}
		}

		/* Case : B
			Parent of pt is right
			child of Grand-parent of
		pt */
		else {
			struct node* uncle_pt = grand_parent_pt->l;

			/* Case : 1
				The uncle of pt is also red
				Only Recoloring required */
			if ((uncle_pt != NULL) && (uncle_pt->c == 1))
			{
				grand_parent_pt->c = 1;
				parent_pt->c = 0;
				uncle_pt->c = 0;
				pt = grand_parent_pt;
			}
			else {
				/* Case : 2
				pt is left child of its parent
				Right-rotation required */
				if (pt == parent_pt->l) {
					rightrotate(parent_pt);
					pt = parent_pt;
					parent_pt = pt->p;
				}
				/* Case : 3
					pt is right child of its parent
					Left-rotation required */
				leftrotate(grand_parent_pt);
				int t = parent_pt->c;
				parent_pt->c = grand_parent_pt->c;
				grand_parent_pt->c = t;
				pt = parent_pt;
			}
		}
	}
	root->c = 0;
}
void preorderTraversal(struct node *node) {
  if (node) {
      printf("%d ", node->d);
    if(node->c==0)
    printf("B ");
    else if(node->c==1)
    printf("R ");
    preorderTraversal(node->l);
    preorderTraversal(node->r);
  }
  return;
}
int main()
{
	int n,t ;
	 scanf("%d",&t);
	for (int i = 0; i < t; i++) {
		 scanf("%d",&n);
	struct node* temp= (struct node*)malloc(sizeof(struct node));
		temp->r = NULL;
		temp->l = NULL;
		temp->p = NULL;
		temp->d = n;
		temp->c = 1;
		root = bst(root, temp);
		fixup(root, temp);
	}
	printf("preoder Traversal of Created Tree\n");
	preorderTraversal(root);
	return 0;
}
