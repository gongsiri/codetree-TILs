#include <iostream>
using namespace std;

int printFun(int n){
    if(n<10)
        return n*n;
    return printFun(n/10) + printFun(n%10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<printFun(n);
    return 0;
}