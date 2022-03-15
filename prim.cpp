#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

struct data
{
	int v, w;

	//bool operator p.w;

};

vector <int> adj[2000];
vector <int> cost[2000];


void prim(int src, int n)
{
	priority_queue<data> pq;

	int visited[2000] = {0}, i, u, v, sum = 0, j, p;

	for(i = 1; i < n; i++)
	{
		u = src;
		visited[src] = 1;

		for(j = 0; j < adj[u].size(); j++)
		{
			v = adj[u][j];
			if(visited[v] == 0)
			{
				data D; D.v = v;
				D.w = cost[u][j];
				pq.push(D);
			}
		}
		do{
			data T = pq.top();
			src = T.v;
			p = T.w;
			pq.pop();
		}
		while(visited[src] == 1);
		{
			sum += p;
		}
	}
	printf("%d", sum);
}

int main()
{
/*
	freopen("intput.txt", "r", stdin);
	int n, e, n1, n2, w, i;

	scanf("%d %d", &n, &e);

	for(i = 0; i < e; i++)
	{
		scanf("%d %d %d", &n1, &n2, &w);

		adj[n1].push_back(n2);
		adj[n2].push_back(n1);

		cost[n1].push_back(w);
		cost[n2].push_back(w);
	}
*/
	adj[1].push_back(2);
	adj[2].push_back(1);
	adj[1].push_back(4);
	adj[4].push_back(1);

	adj[2].push_back(4);
	adj[4].push_back(2);
	adj[2].push_back(5);
	adj[5].push_back(2);

	adj[4].push_back(5);
	adj[5].push_back(4);

	adj[5].push_back(3);
	adj[3].push_back(5);

	adj[3].push_back(6);
	adj[6].push_back(3);

	adj[6].push_back(6);


	prim(1, 6);

	return 0;
}
