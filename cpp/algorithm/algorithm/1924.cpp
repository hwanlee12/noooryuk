#include <iostream>

using namespace std;

int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
string day[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main(){
    cin.tie(0);
    cout.tie(0);

    int x, y;
    cin >> x >> y;

    int sum = 0;

    for(int i = 0; i < x-1; i++){
        sum += months[i];
    }
    sum += y-1;

    cout << day[sum % 7] << '\n';

    return 0;
}