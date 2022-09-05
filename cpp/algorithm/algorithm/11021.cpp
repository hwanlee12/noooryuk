#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a+b <<'\n';
    }

    return 0;
}