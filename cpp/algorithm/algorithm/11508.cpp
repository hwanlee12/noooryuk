#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	vector<long long> v;
	cin >> N;

	for (int i = 0; i < N; i++) {
		long long temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), greater<int>());

	long long sum = 0;
	for (int i = 0; i < N; i += 3) {
		long long cur = v[i] + v[i + 1];
		sum += cur;
	}

	cout << sum << endl;

	return 0;
}