#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	vector<int> v;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	long long sum = 0;
	for (int i = 1; i < N; i++) {
		v[i] += v[i - 1];
	}


	for (int i = 0; i < N; i++) {
		sum += v[i];
	}

	cout << sum << endl;


	return 0;
}