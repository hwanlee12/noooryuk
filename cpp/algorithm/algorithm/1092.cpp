#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<int> crane;
vector<int> box;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		crane.push_back(temp);
	}
	sort(crane.begin(), crane.end(), greater<int>());

	cin >> m;
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		box.push_back(temp);
	}
	sort(box.begin(), box.end(), greater<int>());

	if (box[0] > crane[0]) {
		cout << -1 << endl;
		return 0;
	}

	int cnt = 0;
	while (!box.empty()) {
		cnt++;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < box.size(); j++) {
				if (crane[i] >= box[j]) {
					box.erase(box.begin() + j);
					break;
				}
			}
		}
	}

	cout << cnt << endl;

	return 0;
}