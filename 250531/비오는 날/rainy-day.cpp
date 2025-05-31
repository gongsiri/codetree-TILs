#include <iostream>
#include <string>

using namespace std;

int n;
string date[100];
string day[100];
string weather[100];

class Info{
    public:
        string date;
        string day;
        string weather;

        Info(string date, string day, string weather){
            this->date = date;
            this->day = day;
            this->weather = weather; 
        }
};

int main() {
    cin >> n;

    Info earliest("","","");
    bool check = false;

    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
        if(weather[i]=="Rain"){
            if(!check){
                earliest = Info(date[i],day[i],weather[i]);
                check = true;
            }
            else{
                if(date[i]<earliest.date)
                    earliest = Info(date[i],day[i],weather[i]);
            }
        }
    }

    cout<<earliest.date<<" "<<earliest.day<<" "<<earliest.weather;

    // Please write your code here.

    return 0;
}