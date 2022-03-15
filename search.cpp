#include <stdio.h>
#include <algorithm>
using namespace std;

int ara[20] = {44, 3, 22, 66, 4, 33, 77, 5, 34, 52, 65, 78};
int n = 12, num;

int b_search(int lo, int hi)
{
	//if(lo == hi) return 0;
	if(ara[lo] == num || ara[hi] == num) return 1;
	int mid = (hi + lo) / 2;
	
	if(ara[mid] == num) return 1;
	else if(ara[mid] < num) b_search(mid + 1, hi);
	else if(ara[mid] > num) b_search(lo, mid - 1);
	else if(lo == hi) return 0;
	else return 0;
	
}

int main()
{	
	int i;
	
	sort(ara, ara + n);
	for(i = 0; i < n; i++) printf("%d\n", ara[i]);
	
	scanf("%d", &num);
	
	if(b_search(0, n) == 1) printf("%d found in array\n", num);
	else printf("%d not found in array\n", num);
	
	return 0;
}
