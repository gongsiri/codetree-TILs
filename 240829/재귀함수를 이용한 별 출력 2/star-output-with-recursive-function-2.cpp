#include <iostream>
using namespace std;

// 재귀 함수 실행 시 중첩됨
// return을 만나면 재귀를 끝내고 마지막 함수로 돌아가서 재귀 후 코드 수
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