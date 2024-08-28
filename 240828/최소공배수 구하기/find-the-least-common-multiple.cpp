#include <iostream>
using namespace std;

// 유클리드 호제법
int gcd(int n, int m){
    int r;
    while(1){
        int r = n%m;
        if(r==0)
            return m;
        n=m;
        m=r;
    }
}

int lcm(int n, int m){
    return n*m / gcd(n,m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    cout<<lcm(n,m);
    return 0;
}