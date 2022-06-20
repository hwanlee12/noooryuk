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

	sort(v.begin(), v.end(), comp);
	
	long long sum = 0;
	for(int i = 0; i < v.size(); i++){
		int cur = v[i] - i;
		if (cur < 0) {
			break;
		}
		else {
			sum += cur;
		}
	}

	cout << sum << endl;

	return 0;
}