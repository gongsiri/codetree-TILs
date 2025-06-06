#include <iostream>

using namespace std;

int n;
int x;
char dir;

const int OFFSET = 100000;
const int SIZE = 200001;
int white[SIZE] = {0};
int black[SIZE] = {0};
char color[SIZE] ={0};

int main() {
    cin >> n;

    int pos = OFFSET;

    for (int i = 0; i < n; i++) { 
        cin >> x >> dir;
        
        int step = (dir=='L') ? -1 : 1;
        char curColor = (dir=='L') ? 'W' : 'B';

        for(int j=0; j<x; j++){
            int idx = pos + step * j;
            color[idx] = curColor;
        }
        
        pos += step * (x-1);
    }

    int w = 0, b = 0;
    for(int i=0; i<SIZE; i++){
        if(color[i]=='W') w++;
        else if(color[i]=='B') b++;
    }

    cout<<w<<" "<<b;
    // Please write your code here.

    return 0;
}