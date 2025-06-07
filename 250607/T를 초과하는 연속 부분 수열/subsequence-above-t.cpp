#include <iostream>
#include <algorithm>
using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int length =0;
    int maxLength = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>t) length++;
        else{
            maxLength = max(maxLength, length);
            length = 0;
        }
    }

    cout<<maxLength;
    // Please write your code here.

    return 0;
}