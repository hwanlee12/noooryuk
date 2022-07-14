#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<double> drink;
	cin >> n;

	for (int i = 0; i < n; i++) {
		double temp;
		cin >> temp;
		drink.push_back(temp);
	}

	sort(drink.begin(), drink.end());
	double ans = drink.back();

	for (int i = 0; i < drink.size() - 1; i++) {
		ans += drink[i] / 2;
	}

	cout << ans << endl;

	return 0;
}