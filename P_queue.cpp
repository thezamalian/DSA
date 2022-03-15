#include <stdio.h>
#include <queue>
using namespace std;

void show(priority_queue<int> g)
{
	while(!g.empty())
	{
		printf("\t%d", g.top());
		g.pop();
	}
	printf("\n");
}

int main()
{
	priority_queue <int> PQ;
	
	PQ.push(10);
	PQ.push(20);
	PQ.push(30);
	PQ.push(50);
	PQ.push(1);
	
	printf("The priority queue is: ");
	show(PQ);
	
	int size = PQ.size();
	printf("\nP_queue size: %d\n", size);
	printf("top is : %d\n", PQ.top());
	
	printf("\nS.pop() :" );
	PQ.pop();
	show(PQ);
	
	return 0;
}
