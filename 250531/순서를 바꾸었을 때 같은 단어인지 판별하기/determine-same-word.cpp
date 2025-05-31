#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string word1;
string word2;

bool isSame(string a, string b){
    int l = a.length();
    if(b.length()>l)
        l = b.length();
    for(int i=0; i<l; i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}
int main() {
    cin >> word1;
    cin >> word2;

    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());

    if(isSame(word1,word2))
        cout<<"Yes";
    else
        cout<<"No";
    
    // Please write your code here.

    return 0;
}
