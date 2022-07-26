#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	int n;
	string s;

	cin >> n;
	cin >> s;

	int rcnt= 0 , bcnt = 0;

	char before = s[0];
	if (before == 'B') {
		bcnt++;
	}
	else {
		rcnt++;
	}

	for (int i = 1; i < s.length(); i++) {
		if (s[i] != before) {
			if (s[i] == 'B') {
				bcnt++;
				before = 'B';
			}
			else {
				rcnt++;
				before = 'R';
			}
		}
	}

	cout << min(bcnt, rcnt) + 1 << endl;
	
	return 0;
}