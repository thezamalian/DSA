#include <stdio.h>
#include <queue>
using namespace std;

void show(queue<int> g)
{
	while(!g.empty())
	{
		printf("\t%d", g.front());
		g.pop();
	}
	printf("\n");
}

int main()
{
	queue <int> Q;
	
	Q.push(10);
	Q.push(20);
	Q.push(30);
	Q.push(5);
	Q.push(1);
	
	printf("The queue is: ");
	show(Q);
	
	int size = Q.size();
	printf("\nqueue size: %d\n", size);
	printf("front is : %d\n", Q.front());
	
	printf("\nS.pop() :" );
	Q.pop();
	show(Q);
	
	return 0;
}
