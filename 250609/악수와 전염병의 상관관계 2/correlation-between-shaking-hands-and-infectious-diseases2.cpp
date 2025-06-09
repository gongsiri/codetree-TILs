#include <iostream>
#include <algorithm>
using namespace std;

int N, K, P, T;
int t[250];
int x[250];
int y[250];

int Flagcount[99] = {0};
bool isFlag[99] = {false};

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
        cin >> t[i] >> x[i] >> y[i];
        cases[i] = Case(t[i],x[i],y[i]);
    }

    sort(cases, cases+T, cmp);

    for(int i=0; i<T; i++){
        int x = cases[i].x;
        int y = cases[i].y;

        if(Flagcount[x]>0 && isFlag[x]){
            Flagcount[x]--;
            if(!isFlag[y]){
                isFlag[y] = true;
                Flagcount[y]  = K;
            }
        }

        if(Flagcount[y]>0 && isFlag[y]){
            Flagcount[y]--;
            if(!isFlag[x]){
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