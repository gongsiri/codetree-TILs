#include <iostream>
#include <algorithm>

using namespace std;

int n;
int A[100];
int B[100];

int main() {
    cin >> n;
    int count =0;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A,A+n);

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    sort(B,B+n);

    for(int i=0; i<n; i++){
        if(A[n]==B[n])
            count++;
    }

    if(count==n)
        cout<<"Yes";
    else
        cout<<"No";
    // Please write your code here.

    return 0;
}