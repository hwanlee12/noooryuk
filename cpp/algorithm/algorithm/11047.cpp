#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	int n, ans = 0;
	long long cost;
	vector<long long> coin;
	
	cin >> n >> cost;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		coin.push_back(temp);
	}

	sort(coin.begin(), coin.end(), greater<>());

	for (int i = 0; i < n; i++) {
		if (cost == 0) {
			break;
		}

		long long cur = coin[i];
		if (cost / cur) {
			long long cnt = cost / cur;
			ans += cnt;
			cost -= (cur * cnt);
		}
	}

	cout << ans << endl;

	return 0;
}