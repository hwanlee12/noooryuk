#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> pq;
	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		v.push_back(make_pair(s, e));
	}

	sort(v.begin(), v.end());
	pq.push(v[0].second);
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		while (!pq.empty() && pq.top() <= v[i].first) {
			pq.pop();
		}
		pq.push(v[i].second);
		cnt = max(cnt, (int)pq.size());
	}

	cout << cnt << endl;
	
	return 0;
}