#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int arr[2001][2001] = {0};

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    for(int i=0; i<3; i++){
        for(int y=y1[i]; y<y2[i]; y++){
            for(int x=x1[i]; x<x2[i]; x++){
                arr[y+1000][x+1000] = i+1;
            }
        }
    }
    
    int area = 0;

    for(int y=0; y<2001; y++){
        for(int x=0; x<2001; x++){
            if(arr[y][x]==1) area++;
            else if(arr[y][x]==2) area++;
        }
    }
    
    cout<<area;
    // Please write your code here.

    return 0;
}