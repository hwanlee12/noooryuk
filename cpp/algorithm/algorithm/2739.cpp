#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    for(int i = 1; i <= 9; i++){
        cout << n << " * " << i << " = " << n * i << '\n';
    }

    return 0;
}
