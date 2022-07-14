#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	int n;
	long long ans = 0;
	vector<long long> pt;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		long long temp;
		cin >> temp;
		pt.push_back(temp);
	}

	sort(pt.begin(), pt.end());
	
	if (n % 2) {
		ans = pt[n - 1];
		for (int i = 0; i < (n - 1) / 2; i++) {
			long long temp = pt[i] + pt[(n - 2) - i];
			ans = max(ans, temp);
		}
	}
	else {
		ans = 0;
		for (int i = 0; i < n / 2; i++) {
			long long temp = pt[i] + pt[(n - 1) - i];
			ans = max(ans, temp);
		}
	}

	cout << ans << endl;

	return 0;
}