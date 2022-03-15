#include <stdio.h>
#include <stack>
using namespace std;

void show(stack<int> g)
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
	stack <int> S;
	
	S.push(10);
	S.push(20);
	S.push(30);
	S.push(5);
	S.push(1);
	
	printf("The stack is: ");
	show(S);
	
	int size = S.size();
	printf("\nstack size: %d\n", size);
	printf("top is : %d\n", S.top());
	
	printf("\nS.pop() :" );
	S.pop();
	show(S);
	
	return 0;
}
