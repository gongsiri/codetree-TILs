#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int m1,d1,m2,d2;
    string A;
    int days[13] = {0,31,30,31,30,31,30,31,31,30,31,30,31};
    string week[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};


    cin>>m1>>d1>>m2>>d2;
    cin>>A;

    int month = m1;
    int day = d1;
    int count = 0;

    while(true){
        if(month == m2 && day == d2) break;
        day++;
        count++;
        if(day>days[month]){
            month++;
            day = 1;
        }
    }

    int ans = 0;
    for(int i=0; i<count; i++){
        if (week[i % 7] == A) ans++;
    }
    cout<<ans;
    return 0;
}