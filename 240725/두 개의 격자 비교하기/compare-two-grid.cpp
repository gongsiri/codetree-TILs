#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int** arr1 = new int*[n];
    for(int i=0; i<n; i++){
        arr1[i] = new int[m];
    }

    int** arr2 = new int*[n];
    for(int i=0; i<n; i++){
        arr2[i] = new int[m];
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr1[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr2[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(arr1[i][j] == arr2[i][j]){
                cout<<0<<" ";
            }else{
                cout<<1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}