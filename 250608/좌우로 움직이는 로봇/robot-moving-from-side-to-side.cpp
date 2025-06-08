#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, t;
    char d;
    
    int arrA[1000001] = {0};
    int arrB[1000001] = {0};

    cin>>n>>m;
    int nowA = 0;
    int nowB = 0;
    int locationA = 0;
    int locationB = 0;

    for(int i=0; i<n; i++){
        cin>>t>>d;

        int offset = (d == 'L') ? -1 : 1;

        for(int j=0; j<t; j++){
            locationA += offset;
            nowA++;
            arrA[nowA] = locationA;
        }
    }

    for(int i=0; i<m; i++){
        cin>>t>>d;

        int offset = (d == 'L') ? -1 : 1;

        for(int j=0; j<t; j++){
            locationB += offset;
            nowB++;
            arrB[nowB] = locationB;
        }
    }
    
    int maxNow = max(nowA, nowB);
    int count = 0;

    for (int i=nowA + 1; i <=maxNow; i++) {
        arrA[i] = arrA[nowA];
    }
    for (int i=nowB + 1; i <=maxNow; i++) {
        arrB[i] = arrB[nowB];
    }

    for(int i=1; i<=maxNow; i++){
        if(arrA[i-1]!=arrB[i-1] && arrA[i]==arrB[i]) count++;
    }

    cout<<count;
    return 0;
}