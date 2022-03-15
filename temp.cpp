#include <bits/stdc++.h>
using namespace std;

int compare(int a, int b) {
	return a > b;
}

int i, j, n, m, k, f;

int main() {
	FILE *fp = freopen("input.txt", "r", stdin);

	cin >> n;
	vector<int> v, ans;
	set<int> s;
	set<int>::iterator it;

	for(i = 0; i < n; i++)  {
		cin >> k;
		s.insert(k);
	}
	for(it = s.begin(); it != s.end(); it++) {
		v.push_back(*it);
	}
	sort(v.begin(), v.end(), compare);

	cin >> m;
	for(i = 0; i < m; i++) {
		cin >> k;
		v.push_back(k);
		sort(v.begin(), v.end(), compare);
	}
	for(i = 0; i < v.size(); i++) cout << v[i] << endl;




	return 0;
}
