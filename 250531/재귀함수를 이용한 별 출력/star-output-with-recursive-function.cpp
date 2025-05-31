#include <iostream>

using namespace std;

int n;

void func1 (int n){
    if(n==0) return;
    func1(n-1);
    for(int i=0; i<n; i++){
        cout<<"*";
    }
    cout<<"\n";
}

int main() {
    cin >> n;
    func1(n);
    // Please write your code here.

    return 0;
}