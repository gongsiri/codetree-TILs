#include <iostream>
#include <algorithm>
using namespace std;

int N, K, P, T;
int t;
int x;
int y;

int Flagcount[251] = {0};
bool isFlag[101] = {false};

class Case{
    public:
        int t;
        int x;
        int y;
        
        Case() {} 

        Case(int t, int x, int y){
            this->t = t;
            this->x = x-1;
            this->y = y-1;
        }
};

bool cmp(const Case &a, const Case &b){
    return a.t < b.t;
}

int main() {
    Case cases[250];
    cin >> N >> K >> P >> T;

    Flagcount[P-1] = K; //감염횟수
    isFlag[P-1] = true; //감염여부

    for (int i = 0; i < T; i++) {
        cin >> t >> x >> y;
        cases[i] = Case(t,x,y);
    }

    sort(cases, cases+T, cmp);

    for(int i=0; i<T; i++){
        int x = cases[i].x;
        int y = cases[i].y;

        bool primaryFlagy = isFlag[y];
        bool primaryFlagx = isFlag[x];

        if(Flagcount[x]>0 && primaryFlagx){
            Flagcount[x]--;
            if(!primaryFlagy){
                isFlag[y] = true;
                Flagcount[y]  = K;
            }
        }

        if(Flagcount[y]>0 && primaryFlagy){
            Flagcount[y]--;
            if(!primaryFlagx){
                isFlag[x] = true;
                Flagcount[x] = K;
            }
        }
    }

    for(int i=0; i<N; i++){
        cout<<isFlag[i];
    }

    // Please write your code here.

    return 0;
}