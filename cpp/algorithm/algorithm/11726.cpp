#include <iostream>

using namespace std;

int dp[1001];

int main(){
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for(int i = 4; i <= n; i++){
        dp[i] = (dp[i - 1] + dp[i -2])%10007;
    }

    cout << dp[n] <<'\n';

    return 0;
}