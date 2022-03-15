#include <stdio.h>
#include <stdlib.h>

typedef struct Edge
{
	int src, dest;
}Edge;

typedef struct Graph
{
	int V, E;
	Edge *edge;
}Graph;

typedef struct subset
{
	int parent, rank;
}subset;

Graph* createGraph(int V, int E)
{
	Graph *graph = (Graph*) malloc(sizeof(Graph));
	graph->V = V;
	graph->E = E;
	
	graph->edge = (Edge*) malloc(graph->E * sizeof(Edge));
	
	return graph;
}

int find(subset subsets[], int i)
{
	if(subsets[i].parent != i)
		subsets[i].parent = find(subsets, subsets[i].parent);
		
	return subsets[i].parent;
}

void Union(subset subsets[], int x, int y)
{
	int xroot = find(subsets, x);
	int yroot = find(subsets, y);
	
	if(subsets[xroot].rank < subsets[yroot].rank)
		subsets[xroot].parent = yroot;
	else if(subsets[xroot].rank > subsets[yroot].rank)
		subsets[yroot].parent = xroot;
	else 
	{
		subsets[yroot].parent = xroot;
		subsets[xroot].rank++;
	}
}

int isCycle(Graph *graph)
{
	int V = graph->V;
	int E = graph->E;
	
	subset *subsets = (subset*) malloc(V * sizeof(subset));
	int v;
	for(v = 0; v < V; ++v)
	{
		subsets[v].parent = v;
		subsets[v].rank = 0;
	}
	int e;
	for(e = 0; e < E; ++e)
	{
		int x = find(subsets, graph->edge[e].src);
		int y = find(subsets, graph->edge[e].dest);
		
		if(x == y)
			return 1;
			
		Union(subsets, x, y);		
	}
	return 0;
}

int main()
{
	/*  0
	   / \
	  /   \
	 1-----2*/
	int V = 3, E = 3;
	
	Graph *graph = createGraph(V, E);
	
	graph->edge[0].src = 0;
	graph->edge[0].dest = 1;
	
	graph->edge[1].src = 1;
	graph->edge[1].dest = 2;
	
	graph->edge[2].src = 0;
	graph->edge[2].dest = 2;
	
	if(isCycle(graph))
		printf("Graph contains cycle\n");
	else 
		printf("Graph doesn't conatain cycle\n");
	
	return 0;
}
