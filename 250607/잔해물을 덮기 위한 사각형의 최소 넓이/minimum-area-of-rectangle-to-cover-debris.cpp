#include <iostream>
#include <algorithm>
using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int arr[2001][2001] = {0};

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    for(int i=0; i<2; i++){
        for(int y=y1[i]; y<y2[i]; y++){
            for(int x=x1[i]; x<x2[i]; x++){
                arr[y+1000][x+1000] = i+1;
            }
        }
    }

    int min_x = 2001, max_x = -1, min_y = 2001, max_y = -1;

    for(int y=0; y<2001; y++){
        for(int x=0; x<2001; x++){
            if(arr[y][x]==1){
                min_x = min(min_x, x);
                max_x = max(max_x, x);
                min_y = min(min_y, y);
                max_y = max(max_y, y);
            }
        }
    }
    int area = (max_x - min_x+1) * (max_y- min_y+1);
    cout<<area;
    // Please write your code here.

    return 0;
}