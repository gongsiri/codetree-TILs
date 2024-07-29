#include <iostream>
using namespace std;

void printRec(int n){
    int num =1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(num==10){
                num = 1;
            }
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    printRec(n);
    return 0;
}