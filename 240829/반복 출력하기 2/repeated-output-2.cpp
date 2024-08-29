#include <iostream>
using namespace std;

void printFun(int n){
    if(n==0)
        return;

    printFun(n - 1);
    cout<< "HelloWorld";
    cout<<endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    printFun(n);
    return 0;
}