#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long v[1000001], sum[1000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	long long ans = 0;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
		sum[i] = v[i] + sum[i - 1];
	}

	for (int i = 2; i < n; i++) { // ²ÜÅë ¿À¸¥ÂÊ
		ans = max(ans, sum[n] - v[1] - v[i] + sum[n] - sum[i]);
	}

	for (int i = 2; i < n; i++) {
		ans = max(ans, sum[i - 1] + sum[n] - v[n] - v[i]);
	}

	for (int i = 2; i < n; i++) {
		ans = max(ans, sum[i] - v[1] + sum[n] - sum[i - 1] - v[n]);
	}

	cout << ans << endl;

	return 0;
}