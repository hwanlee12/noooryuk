#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i = 1; i <= 2*n-1; i++){
        for(int j = 1; j <= n - abs(i-n); j++){
            cout << "*";
        }
        for(int j = 1; j <= abs(2*(n-i)); j++){
            cout << " ";
        }
        for(int j = 1; j <= n - abs(i-n); j++){
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}