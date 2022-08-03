#include <iostream>
#include <algorithm>

using namespace std;

int arr[300000], ans;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	ans = arr[n - 1] - arr[0];
	
	for (int i = n - 1; i >= 1; i--) {
		arr[i] = arr[i] - arr[i - 1];
	}
	arr[0] = 0;

	sort(arr, arr + n);
	for (int i = n - 1; k > 1; k--, i--) {
		ans -= arr[i];
	}

	cout << ans << endl;

	return 0;
}