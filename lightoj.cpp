#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int T, C = 1, sum = 0, t, n;

	cin >> T;

	for(C = 0; C < T; C++)
	{
		sum = 0;
		cin >> t;
		while(t--)
		{
			cin >> n;
			sum += n;
		}

		printf("Case %d: %d\n", C+1, sum);
	}

	return 0;
}
