#include <iostream>
using namespace std;

class Weather{
    public:
        string date;
        string day;
        string w;

        Weather(string date, string day, string w){
            this->date = date;
            this->day= day;
            this->w = w;
        }
        Weather(){}
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Weather weather[100];
    for(int i=0; i<n; i++){
        string date;
        string day;
        string w;
        cin>>date>>day>>w;
        weather[i] = Weather(date, day, w);
    }
    
    int close = -1;
    for(int i=0; i<n; i++){
        if(weather[i].w=="Rain"){
            if(close==-1 || weather[i].date<weather[close].date)
                close =i;
        }
    }

    cout<<weather[close].date<<" "<<weather[close].day<<" "<< weather[close].w;
    return 0;
}