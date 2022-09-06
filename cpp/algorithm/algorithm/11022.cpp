#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a << " + " << b << " = " << a + b <<'\n';
    }

    return 0;
}