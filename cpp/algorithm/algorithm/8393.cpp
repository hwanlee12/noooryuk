#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout << sum <<'\n';

    return 0;
}