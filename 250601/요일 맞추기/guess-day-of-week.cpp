#include <iostream>
#include <string>

using namespace std;

int m1, d1, m2, d2;

int minFunc(int a1, int a2, int b1, int b2){
    if(a1 > b1){
        return 2;
    } else if(a1 ==b1){
        if(a2 > b2){
            return 2;
        }else{
            return 1;
        }
    } else{
        return 1;
    }
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string results[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int month;
    int day;
    int count = 0;  
    if(minFunc(m1,d1,m2,d2)==1){
        month = m1;
        day = d1;
        while(true){
            if(month == m2 && day == d2) break;
            day++;
            count++;
            if(day>days[month]){
                month++;
                day = 1;
            }
        }
        cout<<results[count%7];
    }else{ 
        month = m1;
        day = d1;
        while(true){
            if(month == m2 && day == d2) break;
            day--;
            count++;
            if(day==0){
                month--;
                day = days[month];
            }
        }
        cout<<results[(7-(count%7))%7];
    }
    // Please write your code here.

    return 0;
}