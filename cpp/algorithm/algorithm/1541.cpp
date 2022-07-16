#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	int res = 0;
	string num;
	bool isMinus = false;

	for (int i = 0; i <= s.size(); i++) {
		if (s[i] == '-' || s[i] == '+' || i == s.size()) {
			if (isMinus) {
				res -= stoi(num);
				num = "";
			}
			else {
				res += stoi(num);
				num = "";
			}
		}
		else {
			num += s[i];
		}

		if (s[i] == '-') {
			isMinus = true;
		}
	}

	cout << res << endl;

	return 0;
}