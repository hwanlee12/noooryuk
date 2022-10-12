#include <iostream>
#include <algorithm>

using namespace std;

int dp[1000001];

int main(){
    int target;
    cin >> target;

    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i = 4; i <= target; i++){
        int temp = dp[i-1];
        if(i % 2 == 0){
            temp = min(temp, dp[i /2]);
        }
        if(i % 3 == 0){
            temp = min(temp, dp[i/3]);
        }
        dp[i] = temp + 1;
    }

    cout << dp[target] << '\n';

    return 0;
}