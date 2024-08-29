#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    string t;
    vector<string> ansArr;
    string s;
    cin>>n>>k>>t;

    for(int i=0; i<n; i++){
        cin>>s;
        bool flg = true;
        for(int j = 0 ; j < t.length() ; j++)
        {
            if(s[j] != t[j])
            {
                flg = false;
                break;
            }
        }
        if(flg)
        {
            ansArr.push_back(s);
        }        
    }
    
    sort(ansArr.begin(),ansArr.end());

    cout<<ansArr[k-1];

    return 0;
}