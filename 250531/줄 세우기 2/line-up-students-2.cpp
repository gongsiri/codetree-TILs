#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int h;
int w;
int n;

class Student{
    public:
        int h;
        int w;
        int n;
        Student(int h, int w, int n){
            this->h = h;
            this->w = w;
            this->n = n;
        }
};

bool cmp(const Student &a, const Student &b){
    if(a.h==b.h) return a.w > b.w;
    return a.h < b.h;
}

int main() {
    cin >> N;
    vector<Student> students;

    for (int i = 0; i < N; i++) {
        cin >> h >> w;
        students.push_back(Student(h,w,i));
    }

    sort(students.begin(),students.end(),cmp);

    for(int i=0; i<N; i++){
        cout<<students[i].h<<" "<<students[i].w<<" "<<students[i].n+1<<"\n";
    }
    // Please write your code here.

    return 0;
}