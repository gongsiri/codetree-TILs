#include <iostream>

using namespace std;

int n;
int grid[100][100];
int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

bool IsRange(int x, int y){
    return (0<=x && x<n && 0<=y && y<n);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int realCount = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int count = 0;
            for(int dir=0; dir<4; dir++){
                int nx = i + dx[dir];
                int ny = j + dy[dir];

                if(IsRange(nx,ny) && grid[nx][ny]==1){
                    count++;
                }
            }
            if(count>=3) realCount++;
        }
    }

    cout<<realCount;

    // Please write your code here.

    return 0;
}