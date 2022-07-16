#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<pair<int, int>> schedule;

	for (int i = 0; i < n; i++) {
		int start, end;
		cin >> start >> end;
		schedule.push_back(make_pair(end, start));
	}

	sort(schedule.begin(), schedule.end());

	int time = schedule[0].first;
	int count = 1;
	for (int i = 1; i < n; i++) {
		if (time <= schedule[i].second) {
			count++;
			time = schedule[i].first;
		}
	}

	cout << count;

	return 0;
}