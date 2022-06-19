#include <iostream>

using namespace std;

int main() {
	// AAAA BB
	string input, temp = "";
	string result = "";
	
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'X') {
			temp += 'X';
			continue;
		}
		else if (input[i] == '.') {
			if (temp.length() % 2) {
				cout << -1 << endl;
				return 0;
			}
			else {
				int len = temp.length();
				while (len) {
					if (len >= 4) {
						result += "AAAA";
						len -= 4;
					}
					else {
						result += "BB";
						len -= 2;
					}
				}
				result += '.';
				temp = "";
			}
		}
	}

	if (temp.length() != 0) {
		if (temp.length() % 2) {
			cout << -1 << endl;
			return 0;
		}
		else {
			int len = temp.length();
			while (len) {
				if (len >= 4) {
					result += "AAAA";
					len -= 4;
				}
				else {
					result += "BB";
					len -= 2;
				}
			}
		}
	}

	cout << result << endl;

	return 0;
}