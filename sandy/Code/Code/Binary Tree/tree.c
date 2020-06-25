#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "fatal.h"

struct Node{
	ET element;
	BST left;
	BST right;
};

BST insert(ET X, BST T)
{
	if(T==NULL)
	{
		T = malloc(sizeof(struct Node));
		if(T==NULL)
			FatalError("Overload!");
		else
		{
			T->element = X;
			T->left = T->right = NULL;
		}
	}
	else if(X < T->element)
			T->left = insert(X, T->left);
	else if(X > T->element)
			T->right = insert(X, T->right);
	
	return T;
}

BST insertIterative(ET X, BST T)
{	
	if(T==NULL)
	{
		T = malloc(sizeof(struct Node));
		if(T==NULL)
			FatalError("Overlaod!");
		else
		{
			T->element = X;
			T->left = T->right = NULL;
		}
	}
	else
	{
		Position temp = T;
		while(temp != NULL)
		{			
			if(temp->element > X) temp = temp->right;
			else temp = temp->left;
		}
		Position newNode;
		newNode = malloc(sizeof(struct Node));
		newNode->element = X;
		newNode->left = newNode->right = NULL;
		
		if(X > temp->element) temp->right = newNode;
		else temp->left = newNode;
	}
	
	return T;
}

BST makeEmpty(BST T)
{
	if(T!=NULL)
	{
		makeEmpty(T->left);
		makeEmpty(T->right);
		free(T);
	}
	return NULL;
}

Position find(ET X, BST T)
{
	if(T == NULL)
		return NULL;
	if(X < T->element)
		return find(X,T->left);
	else if (X > T->element)
		return find(X,T->right);
	else return T;
}

Position min(BST T)
{
	if(T == NULL)
		return NULL;
	else if(T->left == NULL)
		return T;
	else return min(T->left);
}

Position max(BST T)
{
	if(T == NULL)
		return NULL;
	else if(T->right == NULL)
		return T;
	else return max(T->right);
}

ET retrieve(Position P)
{
	return P->element;
}

void printInOrder(BST T)
{
	if(T==NULL)
	return ;
	
	printInOrder(T->left);
	printf("%d ",retrieve(T));
	printInOrder(T->right);
}

void printPreOrder(BST T)
{
	if(T==NULL)
		return ;
		
	printf("%d ",retrieve(T));
	printPreOrder(T->left);
	printPreOrder(T->right);
	
}

void printPostOrder(BST T)
{
	if(T==NULL)
	return ;
	
	printPostOrder(T->left);
	printPostOrder(T->right);
	printf("%d ",retrieve(T));
}

int countNode(BST T)
{
	if(T!=NULL)
	{
		if(T->left == NULL && T->right == NULL)
			return 1;
		else
			return (1+countNode(T->left) + countNode(T->right));
	}
	else return 0;
}

int countLeaf(BST T)
{
	if(T==NULL)
		return 0;
	if(T->right == NULL && T->left == NULL)
		return 1;
	else
		return(countLeaf(T->left) + countLeaf(T->right));
}

void leafList(BST T)
{
	if(T!=NULL)
	{
		if(T->right == NULL && T->left == NULL)
			printf("%d ",T->element);
		else if(T->right != NULL && T->left != NULL)
			leafList(T->right);
		else if(T->right == NULL && T->left != NULL)
			leafList(T->left);
		else if(T->left && T->right)
		{
			leafList(T->left);
			leafList(T->right);
		}
	}
}

BST deleteData(ET X, BST T)
{
	Position temp;
	
	if(T==NULL)
		Error("Element not Found");
	if(X < T->element)
		T->left = deleteData(X, T->left);
	else if(X > T->element)
		T->right = deleteData(X, T->right);
	else if(T->left && T->right)
	{
		temp = min(T->right);
		T->element = temp->element;
		T->right = deleteData(T->element,T->right);
	}
	else
	{
		temp = T;
		if(T->left == NULL)
			T = T->right;
		else if(T->right == NULL)
			T= T->left;
		free(temp);
	}
	
	return T;
}
