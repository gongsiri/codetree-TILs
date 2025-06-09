#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int v1, t1;
int v2, t2;

int locationA[1000001] = {0};
int locationB[1000001] = {0};
int win[1000001] = {0}; //0 비김, 1 a win, 2 b win

int main() {
    cin >> N >> M;

    int curTimeA= 0;
    int curTimeB = 0;
    int curLocationA = 0;
    int curLocationB = 0;

    for (int i = 0; i < N; i++) {
        cin >> v1 >> t1;
        
        for(int j=0; j<t1; j++){
            curTimeA++;
            curLocationA += v1;
            locationA[curTimeA] = curLocationA;
        }
    }


    for (int i = 0; i < M; i++) {
        cin >> v2 >> t2;

        for(int j=0; j<t2; j++){
            curTimeB++;
            curLocationB += v2;
            locationB[curTimeB] = curLocationB;
        }
    }

    int maxTime = max(curTimeA,curTimeB);
    for(int i=1; i<=maxTime; i++){
        if(locationA[i]>locationB[i]) {
            win[i] = 1;
        }
        else if(locationA[i]<locationB[i]){
            win[i] = 2;
        }else{
            win[i] = 0;
        }
    }

    int count = 0;
    for(int i=1; i<=maxTime; i++){
        if(win[i]!=win[i-1]){
            count++;
        }
    }

    cout<<count;
    // Please write your code here.

    return 0;
}