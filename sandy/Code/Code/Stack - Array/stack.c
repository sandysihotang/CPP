#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node{
	int size;
	int capacity;
	int top;
	int *array;
};

StackRecord construct(int Max){
	StackRecord S = malloc(sizeof(struct node));
	S->array = malloc(sizeof(int)*Max);
	S->capacity = Max;
	S = makeEmpty(S);
	
	return S;
}

StackRecord makeEmpty(StackRecord S){
	S->top = 0;
	S->size = 0;
	
	return S;
}

StackRecord enqueue(ET X, StackRecord S){
	if(!isFull(S)){
		S->size++;
		S->array[S->top] = X;
		S->top++;
		return S;
	} else{
		exit(1);
	}
}

StackRecord dequeue(StackRecord S){
	if(!isEmpty(S)){
		S->size--;
		S->top--;
		return S;
	} else{
		exit(1);
	}
}

ET top(StackRecord S){
	return S->array[S->top-1];
}

int isEmpty(StackRecord S){
	return S->size == 0;
}

int isFull(StackRecord S){
	return S->capacity == S->size;
}

//Author : Eko Simanjuntak - 11415009
