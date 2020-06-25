#include <stdio.h>
#include "adjList.h"

int main()
{
	Node node;
	int *neighbours, i;
	
	Graph G = Construct(7);
	int V = getNumOfNodes(G);
	printf("Number of nodes in graph = %u\n",V);
	
	for(i=1;i<=7;++i)
		G = addNode(G,i);
	
	node  = searchNode(G,1);
	printf("Node is found, ID = %d\n", getNodeID(node));
	
	G = addEdge(G,1,2,0);
	G = addEdge(G,1,4,0);
	G = addEdge(G,1,3,0);
	G = addEdge(G,2,4,0);
	G = addEdge(G,2,5,0);
	G = addEdge(G,3,6,0);
	G = addEdge(G,4,6,0);
	G = addEdge(G,4,7,0);
	G = addEdge(G,4,3,0);
	G = addEdge(G,5,4,0);
	G = addEdge(G,5,7,0);
	G = addEdge(G,7,6,0);
	
	
	neighbours = getNeighbours(G,4);
	for(i=0;i<3;i++) printf("neighbours %d = %d\n",i+1, neighbours[i]);
	return 0;
}
