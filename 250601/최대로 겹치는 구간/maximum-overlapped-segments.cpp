#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    int count[201] = {0};

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=x1[i]; j<x2[i]; j++){
            count[j+100]++;
        }
    }

    int maxCount = 0;
    for(int i=0; i<=200; i++){
        if(count[i]>maxCount){
            maxCount = count[i];
        }
    }
    cout<<maxCount;
    // Please write your code here.

    return 0;
}