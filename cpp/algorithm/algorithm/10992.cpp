#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int n, cnt = 1;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * cnt - 1; j++) {
            if (j == 0 || j == 2 * cnt - 2) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cnt++;
        cout << '\n';
    }

    for (int i = 0; i < 2 * n - 1; i++) {
        cout << "*";
    }

    return 0;
}