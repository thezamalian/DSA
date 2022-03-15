#include <stdio.h>
#include <stdlib.>

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

void createGraph(int V, int E)
{
	Graph *graph = (Graph*)malloc(sizeof(Graph));
	graph->V = V;
	graph->E = E;
	
	graph->edge = (Edge*)malloc(graph->E * sizeof(Edge));
	
	return graph;
}



int main()
{
	int V = 3, E = 3;
	Graph *graph = createGraph(V, E);
	
	graph->edge[0].src = 0;
	graph->edge[0].dest = 1;
	
	graph->edge[0].src = 1;
	graph->edge[0].dest = 2;
	
	graph->edge[0].src = 0;
	graph->edge[0].dest = 2;
	
	if(isCycle(graph)
		printf("Graph contains cycle\n");
	else 
		printf("Graph doesn't contains cycle\n");
	
	return 0;
}
