#include <iostream>
#include <algorithm>
using namespace std;

int N, K, P, T;
int t[250];
int x[250];
int y[250];

int arr[99] = {0};

class Case{
    public:
        int t;
        int x;
        int y;
        int num;
        
        Case() {} 

        Case(int t, int x, int y, int num){
            this->t = t;
            this->x = x;
            this->y = y;
            this->num = num;
        }
};

bool cmp(const Case &a, const Case &b){
    return a.t < b.t;
}

int main() {
    Case cases[250];
    cin >> N >> K >> P >> T;

    arr[K-1] = 3;

    for (int i = 0; i < T; i++) {
        cin >> t[i] >> x[i] >> y[i];
        cases[i] = Case(t[i],x[i],y[i],i);
    }

    sort(cases, cases+T, cmp);

    for(int i=0; i<T; i++){
        if(arr[K-1]!=1){
            if(cases[i].x==K){
                arr[cases[i].y-1] = 1;
                arr[K-1]--;
            } else if(cases[i].y==K){
                arr[cases[i].x-1] = 1;
                arr[K-1]--;
            }
        }
    }

    for(int i=0; i<N; i++){
        cout<<arr[i];
    }

    // Please write your code here.

    return 0;
}