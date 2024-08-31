#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max = INT_MAX;

    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum += (arr[j]*abs(j-i));
        }
        if(sum<max)
            max = sum;
    }

    cout<<max;
    return 0;
}