#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main()
{
	BST T;
	int i;
	
	T = makeEmpty(T);
	
	for(i=0;i<11;i++)
		T = insertIterative(rand()%100,T);
	
	printInOrder(T);
	printf("\n");
/*	printPreOrder(T);
	printf("\n");
	printPostOrder(T);
	printf("\n");
	leafList(T);
	printf("\n");
*/	printf("node %d\n",countNode(T));
	printf("leaf %d\n",countLeaf(T));
		
	makeEmpty(T);
	
	return 0;
}
