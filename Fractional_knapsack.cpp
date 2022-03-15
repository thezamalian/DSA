#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

//from now on, we can use PII
//in the place of pair<....
//we will put weight at the first place
//and price at the second place
typedef pair<int, int> PII;

vector<PII> V;

bool cmp(PII A, PII B)
{
	//we want to order on decreasing order of
	//price/weight
	//So: return A.price/A.weight >
	//  B.price / B.weight
	//But it is better if we can avoid division
	//because of possible precision loss.
	//So we can rewrite it as;
	//return A.price * B.weight > B.price * A.weight
	//we use first for weight,a and second for price.
	
	return A.second * B.first > A.first * B.second;
}

void fractional_knapsack()
{
	int n, W;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int weight, price;
		scanf("%d %d", &weight, &price);
		V.push_back(PII(weight, price));
	}
	sort(V.begin(), V.end(), cmp);
	scanf("%d", &W);
	int ans = 0;
	for(int i = 0; i < n; i++) {
		//W is remaining capacity.
		//V[i].first is weight of the i'th element.
		//so steal minimum of them
		int z = min(W, V[i].first);
		W -= z;
		ans += z * V[i].second;
	}
	printf("Maximum cost : %d\n", ans);
}

int main()
{
	fractional_knapsack();
}
