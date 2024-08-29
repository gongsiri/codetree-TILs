#include <iostream>
using namespace std;

int arr[10];

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a % b);
}

int printFun(int n){
    if(n==0)
        return arr[0];
    int prevNum = printFun(n-1);
    return (prevNum*arr[n]) / gcd(prevNum,arr[n]);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<printFun(n-1);
    return 0;
}