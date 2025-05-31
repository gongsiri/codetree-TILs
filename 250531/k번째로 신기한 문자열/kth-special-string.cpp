#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;
    vector<string>arr;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for(int i=0; i<n; i++){
        if(str[i].substr(0, t.length())==t)
            arr.push_back(str[i]);
    }

    sort(arr.begin(),arr.end());

    cout<<arr[k-1];

    // Please write your code here.

    return 0;
}