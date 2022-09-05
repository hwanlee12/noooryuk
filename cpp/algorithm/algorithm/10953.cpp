#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    char temp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> temp >> b;
        cout << a + b << '\n';
    }

    return 0;
}
