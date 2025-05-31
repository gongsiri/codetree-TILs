#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int x;
int y;

class Point{
    public:
        int x;
        int y;
        int number;

        Point(int x, int y, int number){
            this->x = x;
            this->y = y;
            this->number = number;
        }
};

bool cmp(const Point &a, const Point &b){
    return abs(a.x)+abs(a.y) < abs(b.x)+abs(b.y);
}

int main() {
    cin >> N;
    vector<Point> points;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        points.push_back(Point(x,y,i+1));
    }

    sort(points.begin(),points.end(),cmp);

    for(int i=0; i<N; i++){
        cout<<points[i].number<<"\n";
    }
    // Please write your code here.

    return 0;
}
