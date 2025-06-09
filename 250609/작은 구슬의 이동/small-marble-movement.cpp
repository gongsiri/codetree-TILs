#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int dx[4] = {0,1,-1,0}, dy[4] ={1,0,0,-1};

bool IsRange(int x, int y){
    return (0<x && x<n-1 && 0<y && y<n-1);
}

int dir(char a){
    if(a=='U') return 2;
    else if(a=='D') return 1;
    else if(a=='R') return 0;
    else if(a=='L') return 3;
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    int direction = dir(d);
    for(int i=0; i<t; i++){
        if(!IsRange(c,r)){
            direction = 3-direction;
        }else{
            c += dx[direction];
            r += dy[direction];
        }
    }

    cout<<r+1<<" "<<c+1;
    // Please write your code here.

    return 0;
}