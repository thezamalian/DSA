//problem of Mystrioshka Dolls
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int nested(int arr[], int n)
{
	int i;
	
	for(i = 0; i < n - 1; i++)
	{
		if(arr[i] == arr[i + 1]) return 0;
	}
	
	return 1;
}

int main()
{
	int T, i, j, k, n;
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++)
	{
		scanf("%d", &n);
		int ara[n];
		
		for(j = 0; j < n; j++) scanf("%d", &ara[j]);
		
		sort(ara, ara + n);
		
		if(nested(ara, n)) printf("YES\n");
		else printf("NO\n");
		
	}
	
	return 0;
}
