#include <iostream>
using namespace std;

void printFun(int n){
    if(n==0)
        return;
    for(int i=0; i<n; i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    printFun(n-1);
    for(int i=0; i<n; i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}


int main() {
    int n;
    cin>>n;
    printFun(n);
    return 0;
}