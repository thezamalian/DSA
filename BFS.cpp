#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;


vector<int>adj[100];
int visited[100];

void bfs(int s, int n)
{
	for(int i = 0; i <  n; i++) visited[i] = 0;
	queue<int> Q;
	Q.push(s);
	visited[s] = 1;

	while(!Q.empty())
	{
		int u = Q.front();
		Q.pop();

		for(int i = 0; i < adj[u].size(); i++)
			if(visited[adj[u][i]] == 0)
			{
				int v = adj[u][i];
				visited[v] = 1;
				Q.push(v);
			}
	}
}


int main()
{
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



	return 0;
}

