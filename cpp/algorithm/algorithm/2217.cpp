#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
	return a > b;
}

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
	sort(v.begin(), v.end(), greater<int>());

	long long weight = 0;
	for (int i = 0; i < v.size(); i++) {
		long long cur = v[i] * (i + 1);
		if (cur > weight) {
			weight = cur;
		}
	}
	cout << weight << endl;

	return 0;
}