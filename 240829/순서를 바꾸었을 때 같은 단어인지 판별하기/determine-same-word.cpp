#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    // sort는 문자열도 가능
    // 정수형 -> arr+시작주소,arr+끝 주소
    // 문자형 -> s.begin(), s.end()
    string s1,s2;
    cin>>s1>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}