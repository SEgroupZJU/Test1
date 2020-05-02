#include <stdio.h>
#include <stdlib.h>

typedef double ElementType;

struct AVLTreeNode{
	ElementType data;
	Tree left;
	Tree right;
	int height;
}; 

typedef struct AVLTreeNode *Tree;

Tree Insert(ElementType X, Tree T);

int main()
{
	
}

Tree Insert(ElementType X, Tree T)
{
	if(!T)
	{
		Tree tmp = malloc(sizeof(struct AVLTreeNode));
		tmp->data = X;
		tmp->left = NULL;
		tmp->right = NULL;
		tmp->height = 1;
		T = tmp;
	}
	else
	{
		if(T->data > X)
		{
			T->left = Insert(X,T->left);
			if(T->left->height - )
		}
		else if(T->data < X)
		{
			T->right = Insert(X,T->right);
		}
		else
		{
			printf("ERROR! Exist Element %lf!\n",X);
		}
	}
	
	return T;
}
