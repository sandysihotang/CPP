#include <stdio.h>
#include "adjMatrix.h"

int main()
{
//	int *predecessors,*successors,i,counter;
	Graph G = NULL;
	
	G = Construct(G,5);
	int V = getNumOfNodes(G);
	printf("Number of nodes in graph = %u\n\n",V);
	
	G = addEdge(G,0,1,3);
	G = addEdge(G,0,2,5);
	G = addEdge(G,1,2,2);
	G = addEdge(G,1,3,6);
	G = addEdge(G,2,3,2);
	G = addEdge(G,3,4,4);
	G = addEdge(G,4,2,6);

	printAdjMatrix(G);
	
	reverseAdjMatrix(G);
	
	return 0;
}
