typedef int ET;

#ifndef _Tree_H
#define _Tree_H

struct Node;
typedef struct Node *Position;
typedef struct Node *BST;

BST insert(ET X, BST T);
Position find(ET X, BST T);
ET retrieve(Position P);
BST makeEmpty(BST T);
Position min(BST);
Position max(BST);
BST deleteData(ET X, BST T);
BST insertIterative(ET X, BST T);

void printInOrder(BST T);
void printPreOrder(BST T);
void printPostOrder(BST T);

int countNode(BST T);
int countLeaf(BST T);
void leafList(BST T);

#endif
