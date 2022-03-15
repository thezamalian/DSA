#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> adj[100];
int vis[100];

void dfs(int at)
{
	if(vis[at]) return;
	vis[at] = 1;

	for(int i = 0; i < adj[at].size(); i++)
		dfs(adj[at][i]);
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


	for(int i = 0; i < 100; i++) vis[i] = 0;


	dfs(1);

	return 0;
}

