#include <iostream>

using namespace std;

int main() {

	int count = 0;
	int i = 0;
	int n;

	cin >> n;

	while (1) {
		if (n % 5 == 0) {
			count += n / 5;
			break;
		}
		else {
			n -= 2;
			count++;
		}

		if (n < 0) {
			break;
		}
	}

	if (n < 0) {
		cout << -1 << endl;
	}
	else {
		cout << count << endl;
	}


	return 0;
}