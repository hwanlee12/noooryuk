#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int n, cnt, blk;
    cin >> n;
    cnt = 1;
    blk = n-1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < blk; j++) {
            cout << " ";
        }
        for (int j = 0; j < cnt; j++) {
            if (n % 2 == 1) {
                if ((n - j) % 2 == 0) {
                    cout << " ";
                }
                else {
                    cout << "*";
                }
            }
            else {
                if ((n - j) % 2 == 0) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
        }
        cnt += 2; blk--;
        cout << '\n';
    }

    return 0;
}