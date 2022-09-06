#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int cnt = 1;
    string temp = "";

    for(int i = 0; i < s.length(); i++){
        if(cnt < 11){
            temp += s[i];
            cnt++;
        }
        else{
            cout << temp << '\n';
            temp = "";
            cnt = 1;
            i--;
        }
        if(i == s.length() - 1){
            cout << temp << '\n';
        }
    }

    return 0;
}