#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string secret;
    char place;
    int time;
    cin>>secret>>place>>time;

    class Practice{
        public :
            string secret;
            char place;
            int time;

            Practice(string secret, char place, int time){
                this->secret = secret;
                this->place = place;
                this->time = time;
            }
    };

    Practice practice = Practice(secret, place,time);
    cout<<"secret code : "<<practice.secret<<"\n";
    cout<<"meeting point : "<<practice.place<<"\n";
    cout<<"time : "<<practice.time<<"\n";

    return 0;
}