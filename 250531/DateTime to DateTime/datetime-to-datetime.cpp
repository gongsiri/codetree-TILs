#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    int day = 11, hour = 11, minute = 11;
    int count = 0;

    while(true){
        if(day == a && hour == b && minute ==c) break;
        if(day > a || (day==a && hour>b) || (day==a && hour==b && minute>c)) {
            count = -1;
            break;
        }
        count++;
        minute++;
        if(minute == 60){
            hour++;
            minute = 0;
        }
        if(hour == 24){
            day++;
            hour = 0;
        }
    }

    cout<<count;
    return 0;
}