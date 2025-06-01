#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;
    int result[201] = {0};

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    int location = 0;
    for(int i=0; i<n; i++){
        int prev = location;
        if(dir[i]=='L'){
            location -= x[i];

        }else{
            location += x[i];
        }
        int from = min(prev, location);
        int to = max(prev,location);
        
        for(int j=from; j<to; j++){
            result[j+100]++;
        }
    }

    int count = 0;
    for(int i=0; i<=200; i++){
        if(result[i]>=2) count++;
    }
    
    cout<<count;
    // Please write your code here.

    return 0;
}