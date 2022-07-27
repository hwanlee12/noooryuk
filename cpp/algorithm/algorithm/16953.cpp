#include <iostream>
#include <algorithm>

using namespace std;

long long a, b, mini = 99999;
int ans = 0;

void dfs(long long a, long long cnt) {
	if (a > b) {
		return;
	}

	if (a == b) {
		mini = min(mini, cnt);
	}

	dfs(a * 2, cnt + 1);
	dfs(a * 10 + 1, cnt + 1);
}


int main() {
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b;
	dfs(a, 1);

	if (mini == 99999) {
		cout << -1 << endl;
	}
	else {
		cout << mini << endl;
	}

	return 0;
}