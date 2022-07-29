#include <iostream>
#include <vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	string maxi = "", mini = "";
	int m_cnt = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'M') { // M
			m_cnt++;
		}
		else { // K
			maxi += '5';
			for (int j = 0; j < m_cnt; j++) {
				maxi += '0';
			}

			if (m_cnt != 0) {
				mini += '1';
				for (int j = 0; j < m_cnt - 1; j++) {
					mini += '0';
				}
			}
			mini += '5';
			m_cnt = 0;
		}

		if (i == s.length() - 1 && m_cnt != 0) {
			for (int j = 0; j < m_cnt; j++) {
				maxi += '1';
			}

			mini += '1';
			for (int j = 0; j < m_cnt - 1; j++) {
				mini += '0';
			}
		}
	}


	cout << maxi << '\n' << mini << '\n';

	return 0;
}