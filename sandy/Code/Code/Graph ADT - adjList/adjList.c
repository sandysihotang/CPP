#include <stdio.h>
#include <stdlib.h>
#include "adjList.h"

struct GraphNode{
	ET ID;
	Edge next;
	ET weight;
};

struct GraphADT{
	ET V;
	Node *adjList;
};

Graph Construct(ET V)
{
	Graph G = malloc(sizeof(struct GraphADT));
	G->V =V;
	G->adjList = malloc(V*sizeof(PtrToGraphNode));
	
	return G;	
}

ET getNumOfNodes(Graph G)
{
	return G->V;
}

Graph addNode(Graph G, ET X)
{
	static int counter;
	if(counter < G->V)
	{
		G->adjList[counter] = malloc(sizeof(struct GraphNode));
		G->adjList[counter]->ID = X;
		G->adjList[counter]->next = NULL;
		counter++;
	}
	else
	{
		printf("Cant add new node\n");
		exit(1);
	}
	
	return G;
}

Node searchNode(Graph G, ET X)
{
	int i=0;
	ET limit = getNumOfNodes(G);
	
	for(i=0;i<limit;++i)
	{
		if(G->adjList[i]->ID == X)
			return G->adjList[i];
	}
}

ET getNodeID(Node node)
{
	return node->ID;
}

Graph addEdge(Graph G, ET Start, ET End, ET Weight)
{
	Node node = searchNode(G,Start);
	
	if(node!=NULL)
	{
		while(node->next != NULL) node = node->next;
		
		Edge new = malloc(sizeof(struct GraphNode));
		new->ID = End;
		new->weight = Weight;
		new->next = NULL;
		node->next = new;
	}
	
	return G;
}

int *getNeighbours(Graph G, ET ID)
{
	int i=0;
	int *neighbours = malloc(3*sizeof(int));
	
	Node node = searchNode(G, ID);
	while(node->next != NULL)
	{
		node = node->next;
		neighbours[i] = node->ID;
		i++;
	}
	
	return neighbours;
}
