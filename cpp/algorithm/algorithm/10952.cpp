#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0)
            break;
        else
            cout << a + b << '\n';
    }

    return 0;
}
