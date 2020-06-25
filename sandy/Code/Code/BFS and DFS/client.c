#include <stdio.h>
#include "graph.h"

int main()
{
	Node node;
	ET i;
	
	Graph G = constructGraph(7);
	int V = getNumOfNodes(G);
	printf("Number of Nodes in Graph : %u\n",V);
	
	for(i=1;i<=7;++i)
		G = addNode(G,i);
		
	node = searchNode(G,1);
	
	printf("Node is found, id = %d\n", getNodeID(node));
	
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
	
	printf("\n\n");
	
	printf("BFS Traversal:\n\n");
	BFS(G,1);
	
	printf("\n\nDFS Traversal:\n\n");
	DFS(G);
	printf("\n\n");
	destroyGraph(G);
	
	return 0;
}
