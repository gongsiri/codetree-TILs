#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];
char arr[201][201] = {0}; 
char color;

int main() {
    cin >> n;
    
    // 직사각형 좌표 입력
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // 직사각형 색칠하기
    for (int i = 0; i < n; i++) {
        // 색 결정 (짝수 번째는 'B', 홀수 번째는 'R')
        if (i % 2 == 0) {
            color = 'R';  // 짝수 번째는 'B'
        } else {
            color = 'B';  // 홀수 번째는 'R'
        }

        for (int y = y1[i]; y < y2[i]; y++) {
            for (int x = x1[i]; x < x2[i]; x++) {
                arr[y + 100][x + 100] = color;
            }
        }
    }

    int count = 0;

    for (int y = 0; y < 201; y++) {
        for (int x = 0; x < 201; x++) {
            if (arr[y][x] == 'B') count++;
        }
    }

    cout << count;  

    return 0;
}
