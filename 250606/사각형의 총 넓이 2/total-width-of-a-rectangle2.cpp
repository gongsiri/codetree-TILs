#include <iostream>

using namespace std;

int N;
int x1, y1;
int x2, y2;

int arr[201][201]={0};

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1 >> y1>> x2 >> y2;
        
        for(int y=y1; y<y2; y++){
            for(int x=x1; x<x2; x++){
                arr[y+100][x+100] = 1;
            }
        }
    }

    int area = 0;

    for(int y=0; y<201; y++){
        for(int x=0; x<201; x++){
            if(arr[y][x]==1) area++;
        }
    }

    cout<<area;
    // Please write your code here.

    return 0;
}