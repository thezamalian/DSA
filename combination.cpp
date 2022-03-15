#include <stdio.h>

int number[20];
int n, k;

//call with: permutation(1, 0)
void combination(int at, int last)
{
	int i;
	if(at == k + 1)
	{
		for(i = 1; i <= k; i++) printf("%d ", number[i]);
		printf("\n");
		return;
	}
	
	for(i = last + 1; i <= n - k + at; i++)
	{
		number[at] = i;
		combination(at + 1, i);
	}
}

int main()
{
	scanf("%d %d", &n, &k);
	
	combination(1, 0);
	
	return 0;
}
