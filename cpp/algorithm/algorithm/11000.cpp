#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

struct cmp {
	bool operator()(pair<int, int> a, pair<int, int> b) {
		if (a.first == b.first) {
			return a.second > b.second;
		}
		else {
			return a.first > b.first;
		}
	}
};

priority_queue <pair<int, int>, vector<pair<int, int>>, cmp> pq;
priority_queue <int, vector<int>, greater<int>> tq;
int n, s, t;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> t;
		pq.push({ s,t });
	}
	
	while (!pq.empty()) {
		tie(s, t) = pq.top();
		pq.pop();

		if (tq.empty()) {
			tq.push(t);
		}
		else {
			if (s >= tq.top()) {
				tq.pop();
				tq.push(t);
			}
			else {
				tq.push(t);
			}
		}
	}

	cout << tq.size() << endl;

	return 0;
}