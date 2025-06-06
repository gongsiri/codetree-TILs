#include <iostream>

using namespace std;

const int OFFSET = 100000;
const int SIZE = 200001;

int white[SIZE] = {0};
int black[SIZE] = {0};
bool isGray[SIZE] = {false};
char color[SIZE] = {0};

int main() {
    int n;
    cin >> n;

    int pos = OFFSET;

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;

        int step = (dir=='L') ? -1 : 1;
        char curColor = (dir=='L') ? 'W' : 'B';

        for(int j=0; j<x; j++){
            int idx = pos + step * j;

            if(isGray[idx]) continue;

            if(curColor == 'W') white[idx]++;
            else black[idx]++;

            if(white[idx]>=2 && black[idx]>=2){
                isGray[idx] = true;
                color[idx] = 'G';
            } else{
                color[idx] = curColor;
            }
        }

        pos += step * (x-1);
    }

    int w = 0, b = 0, g = 0;
    for(int i=0; i<SIZE; i++){
        if(color[i]=='W') w++;
        else if(color[i]=='B')b++;
        else if(color[i]=='G') g++;
    }

    cout<<w<<" "<<b<<" "<<g;

    // Please write your code here.

    return 0;
}