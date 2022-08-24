#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
int arr[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	vector<int> dist(n - 1, 0);
	for (int i = 0; i < n - 1; i++) {
		dist[i] = arr[i + 1] - arr[i];
	}

	sort(dist.begin(), dist.end());
	int ans = 0;
	for (int i = 0; i < n - k; i++) {
		ans += dist[i];
	}
	cout << ans << endl;

	return 0;
}