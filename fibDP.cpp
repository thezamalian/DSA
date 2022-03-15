#include <bits/stdc++.h>
using namespace std;

int n = 1000;
int dp[1000];

int way(int num)
{
	if(num == 0 || num == 1) return 1;
	if(dp[num] != -1) return dp[num];
	
	return dp[num] = way(num - 1) + way(num - 2);
}

int main()
{
	int i;
	
	for(i = 0; i < n; i++) dp[i] = -1;
	
	int num;
	scanf("%d", &num);
	int fib = way(num);
	
	printf("Fibonacci of %d is %d\n", num, fib);//way[num]);
	
	return 0;
}
