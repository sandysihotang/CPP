#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "adjMatrix.h"

struct GraphADT{
	ET V;
	ET E;
	ET **adjMatrix;
};

Graph Construct(Graph G, ET V)
{
	int i,j;
	
	G = malloc(sizeof(struct GraphADT));
	G->V = V;
	G->adjMatrix = (ET **)malloc(V*sizeof(ET));
	
	if(G->adjMatrix == NULL)
	{
		printf("Oveload\n");
		exit(1);
	}
	
	for(i=0;i<V;i++)
	{
		G->adjMatrix[i] = (ET *)malloc(V*sizeof(ET));
		if(G->adjMatrix==NULL)
		{
			printf("Overload\n");
			exit(1);
		}
	}
	
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			if(i==j) G->adjMatrix[i][j] = 0;
			else G->adjMatrix[i][j] = 0;
		}
	}
	
	return G;
}

ET getNumOfNodes(Graph G)
{
	return G->V;
}

ET getNumOfEdges(Graph G)
{
	return G->E;
}

Graph addEdge(Graph G, ET i, ET j, ET w)
{
	if(G!=NULL)
	{
		G->adjMatrix[i][j] = w;
		G->E++;
	}
	return G;
}

Graph removeEdge(Graph G, ET i, ET j)
{
	if(G!=NULL)
	{
		G->adjMatrix[i][j] = 0;
		G->E++;
	}
	return G;
}

ET getNumOfPredecessors(Graph G, ET node, ET V)
{
	ET i, counter = 0;
	
	for(i=0;i<V;i++)
	{
		if((G->adjMatrix[i][node] < UINT_MAX - 1000) && (i!=node)) counter++;
	}
	return counter;
}

int *Predecessors(Graph G, ET node, ET V)
{
	int i=0,j=0, *predecessors;
	ET counter = getNumOfPredecessors(G, node, V);
	
	predecessors = malloc(counter*sizeof(ET));
	for(i=0;i<V;i++)
	{
		if((G->adjMatrix[i][node] < UINT_MAX - 1000) && (i!=node))
		{
			predecessors[j] = i;
			j++;
		}
	}
	
	return predecessors;
}

ET getNumOfSuccessors(Graph G, ET node, ET V)
{
	ET i, counter = 0;
	
	for(i=0;i<V;i++)
	{
		if((G->adjMatrix[node][i] < UINT_MAX - 1000) && (i!=node)) counter++;
	}
	return counter;
}

int *Successors(Graph G, ET node, ET V)
{
	int i=0,j=0, *successors;
	ET counter = getNumOfSuccessors(G, node, V);
	
	successors = malloc(counter*sizeof(ET));
	for(i=0;i<V;i++)
	{
		if((G->adjMatrix[node][i] < UINT_MAX - 1000) && (i!=node))
		{
			successors[j] = i;
			j++;
		}
	}
	
	return successors;
}

void printAdjMatrix(Graph G)
{
	int i,j;
	ET V = getNumOfNodes(G);
	
	printf("\t");
	for(i=0;i<V;i++) printf("   V[%d] \t",i);
	printf("\n");
	for(i=0;i<V;i++)
	{
		printf("V[%d]\t",i);
		for(j=0;j<V;j++) printf("%5u \t\t", G->adjMatrix[i][j]);
		printf("\n");
	}
	printf("\n");
}

void reverseAdjMatrix(Graph G)
{
	ET i,j,temp;
	
	ET limit = getNumOfNodes(G);
	
	for(i=0;i<limit;i++)
	{
		for(j=0;j<i;j++) 
		{
			temp = G->adjMatrix[i][j];
			G->adjMatrix[i][j] = G->adjMatrix[j][i];
			G->adjMatrix[j][i] = temp;
		}
	}
	printf("Adjecency Matrix has been reversed\n");
	printAdjMatrix(G);
}

