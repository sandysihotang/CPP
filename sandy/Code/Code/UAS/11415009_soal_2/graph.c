#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "elementtype.h"
#include "queue.h"
#include "graph.h"

struct GraphNode{
	ET ID;
	Edge next;
	Colours color;
	ET d;
	ET f;
	Node pi;
};

struct GraphEdge{
	PtrToGraphNode node;
	int weight;
	Edge next;	
};

struct GraphADT{
	ET V;
	Node *adjlist;
};

Graph constructGraph(ET V)
{
	Graph G = malloc(sizeof(struct GraphADT));
	G->V = V;
	G->adjlist = malloc(V*sizeof(PtrToGraphNode));
	
	return G;
}

ET getNumOfNodes(Graph G)
{
	return G->V;
}

Graph addNode(Graph G, ET X)
{
	static int count;
	Node node = malloc(sizeof(struct GraphNode));
	if(count < G->V)
	{
		node->ID = X;
		node->next = NULL;
		node->color = None;
		node->d = 0;
		node->f = 0;
		node->pi = NULL;
		G->adjlist[count] = node;
		count++;
	}
	else
	{
		printf("Cannot add node\n");
		exit(1);
	}
	
	return G;
}

Node searchNode(Graph G, ET X)
{
	int i=0;
	ET limit = getNumOfNodes(G);
	Node node;
	for(i=0;i<limit;++i)
	{
		if(G->adjlist[i]->ID == X)
			node = G->adjlist[i];
	}
	
	return node;
}

ET getNodeID(Node node)
{
	return node->ID;
}

Graph removeNode(Graph G, ET X)
{
	Node rem_node, n;
	Edge temp;
	ET i, index=0, limit = G->V;
	
	printf("initiate removed\n\n");
	for(i=0;i<limit;i++)
	{
		if(G->adjlist[i]->ID == X)
		{
			rem_node = G->adjlist[i];
			index = i;
			break;
		}
	}
	
	printf("remove edge to removed node\n\n");
	for(i=0;i<limit;i++)
	{
		n = G->adjlist[i];
		if((n != NULL) && (n->ID != rem_node->ID))
		{
			printf("prepare to remove edge from node-%u"
			"to remove node-%u \n",n->ID, rem_node->ID);
			G = removeEdge(G, n->ID, rem_node->ID);
		}
	}
	
	printf("Removed all edge from the removed node-%u \n\n",rem_node->ID);
	while(rem_node->next != NULL)
	{
		temp = rem_node->next;
		rem_node->next = temp->next;
		printf("edge from node-%u to node-%u is removed\n",rem_node->ID, temp->node->ID);
		free(temp);
	}
	
	free(rem_node);
	
	if(index != (limit-1))
	{
		for(i=index+1;i<limit;i++)
			G->adjlist[i-1] = G->adjlist[i];
		G->adjlist[limit-1] = NULL;
	}
	
	G->V = G->V-1;
	i=0;
	while(G->adjlist[i] != NULL)
	{
		printf("adjlist[%u] = node-%u\n",i,G->adjlist[i]->ID);
		i++;
	}
	
	return G;
}

Graph removeEdge(Graph G, ET Start, ET End)
{
	Node source = searchNode(G, Start);
	printf("Find start node = node-%u\n",source->ID);
	Edge temp,e;
	
	temp = source->next;
	if(temp == NULL)
		return G;
	else if(temp->node->ID == End)
	{
		source->next = temp->next;
		printf("Edge from node-%u to node-%u is removed\n", source->ID, temp->node->ID);
		free(temp);
		return G;
	}
	else if((temp->node->ID != End) && (temp->next != NULL))
	{
		while((temp->next != NULL) && (temp->next->node->ID != End))
			temp = temp->next;
		
		if(temp->next == NULL)
			return G;
		else
		{
			e = temp->next;
			temp->next = e->next;
			printf("Edge from node-%u to node-%u is removed\n",source->ID, e->node->ID);
			free(e);
			return G;	
		}
	}
	else
		return G;
}

Graph addEdge(Graph G, ET Start, ET End, int Weight)
{
	Node s = searchNode(G, Start);
	Node e = searchNode(G, End);
	Edge edge = s->next;
	
	if(s == NULL)
	{
		printf("Simpul start tidak ada\n");
		return G;
	}
	else
	{
		Edge new = malloc(sizeof(struct GraphEdge));
		new->node = e;
		new->weight = Weight;
		new->next = NULL;
		if(edge == NULL)
			s->next = new;
		else
		{
			while(edge->next != NULL)
				edge = edge->next;
			edge->next = new;
		}
		return G;
	}
}

ET countNeighbours(Node n)
{
	int count = 0;
	Edge edge = n->next;
	
	if(edge != NULL)
	{
		count = 1;
		while(edge->next != NULL)
		{
			edge = edge->next;
			count++;
		}
	}
	
	return count;
}

Node *getSuccessors(Graph G, ET ID)
{
	ET count=0, i=0;
	Edge edge;
	
	Node node = searchNode(G,ID);
	
	count = countNeighbours(node);
	if(count==0) return NULL;
	else
	{
		Node *neighbours = malloc(count*sizeof(PtrToGraphNode));
		edge = node->next;
		while(i<count)
		{
			neighbours[i] = edge->node;
			edge = edge->next;
			i++;
		}
		return neighbours;
	}
}

Node preparedTraverse(Graph G, ET S)
{
	Node node;
	int i=0;
	
	Node source = searchNode(G,S);
	if(source == NULL)
		return NULL;

	ET limit = getNumOfNodes(G);
	
	for(i=0;i<limit;i++)
	{
		node = G->adjlist[i];
		if(node != source)
		{
			node->color = White;
			node->d = INT_MAX;
			node->pi = NULL;
		}
	}
	source->color = Gray;
	source->d = 0;
	source->pi = NULL;
	
	return source;
}

void BFS(Graph G, ET S)
{
	printf("BFS function is called\n");
	Node u,v, *neighbours = NULL, source;
	ET X;
	ET i, count;
	
	source = preparedTraverse(G,S);
	printf("BFS source is returned = node-%u\n",source->ID);
	
	if(source == NULL)
	{
		printf("source is null\n");
		exit(0);
	}
	
	Queue Q = createQueue();
	printf("Queue is created, id = %u\n", getID(Q));
	enqueue(source->ID, Q);
	printf("Source is added to queue.\n");
	printf("BFS is started to traverse");
	while(!isEmpty(Q))
	{
		X = dequeue(Q);
		u = searchNode(G,X);
		printf("BFS start at node: %u\n",u->ID);
		neighbours = getSuccessors(G,u->ID);
		if(neighbours == NULL) continue;
		count = countNeighbours(u);
		
		for(i=0;i<count;i++)
		{
			v = neighbours[i];
			printf("Found node: %u\n",v->ID);
			
			if(v->color == White)
			{
				v->color = Gray;
				v->d = u->d+1;
				v->pi = u;
				enqueue(v->ID,Q);
			}
		}
		
		u->color = Black;
		free(neighbours);
	}
	free(Q);
}

void destroyGraph(Graph G)
{
	ET i=0;
	Node node = NULL;
	Edge e;
	printf("Graph is ready to destroy\n");
	
	for(i=0;i<G->V;i++)
	{
		node = G->adjlist[i];
		if(node != NULL)
		{
			while(node->next != NULL)
			{
				e = node->next;
				node->next = e->next;
				printf("Edge from node-%u to node-%u is free\n",node->ID, e->node->ID);
				free(e);
			}
		}
	}
	
	for(i=0;i<G->V;i++)
	{
		node = G->adjlist[i];
		printf("Node-%u is free,\n",node->ID);
		free(node);
	}
	free(G->adjlist);
	free(G);
}

void DFS(Graph G)
{
	ET count, i, time;
	Node u;
	
	count = getNumOfNodes(G);
	
	for(i=0;i<count;i++)
	{
		u = G->adjlist[i];
		u->color = White;
		u->pi = NULL;
	}
	
	time = 0;
	
	for(i=0;i<count;i++)
	{
		u = G->adjlist[i];
		printf("DFS start with node-%u\n",u->ID);
		if(u->color == White)
			DFS_Visit(G,u,&time);
	}
}

void DFS_Visit(Graph G, Node u, ET *time)
{
	printf("DFS_Visit is called\n");
	ET count, i;
	Node v, *neighbours;
	
	*time = *time + 1;
	printf("time = %u\n",*time);
	u->d = *time;
	u->color = Gray;
	
	count = countNeighbours(u);
	neighbours = getSuccessors(G,u->ID);
	for(i=0;i<count;i++)
	{
		v = neighbours[i];
		if(v->color == White)
		{
			printf("From node-%u, DFS found node-%u\n",u->ID,v->ID);
			v->pi = u;
			DFS_Visit(G,v,time);
		}
	}
	
	u->color = Black;
	*time = *time + 1;
	u->f = *time;
}

void DFS_EX(Graph G, ET S)
{
	ET count, i, time;
	Node u;
	Node s = searchNode(G,S);
	count = getNumOfNodes(G);
	
	for(i=0;i<count;i++)
	{
		u = G->adjlist[i];
		u->color = White;
		u->pi = NULL;
	}
	
	time = 0;
	
		u = s;
		printf("DFS_EX start with node-%u\n",u->ID);
		if(u->color == White)
			DFS_Visit(G,u,&time);
}
