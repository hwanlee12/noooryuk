#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int n, mx, mn;
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(i == 0){
            mx = temp;
            mn = temp;
            continue;
        }
        mx = max(mx, temp);
        mn = min(mn, temp);
    }

    cout << mn << " " << mx << '\n';

    return 0;
}