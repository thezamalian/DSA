#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, i;
	char s[100];
	vector<string> V;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%s", s);
		V.push_back(s);
	}
	
	sort(V.begin(), V.end());
	
	return 0;
}
