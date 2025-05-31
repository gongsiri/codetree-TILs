#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin >> m1 >> d1 >> m2 >> d2;

    int count = 1;
    int month = m1;
    int day = d1;

    while(true){
        if(month==m2 && day==d2) break;
        count++;
        day++;
        if(day>arr[month]){
            month++;
            day=1;
        }
    }

    cout<<count;

    // Please write your code here.

    return 0;
}