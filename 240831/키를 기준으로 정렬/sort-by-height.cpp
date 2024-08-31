#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        string name;
        int height;
        int weight;

        Student(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Student(){}
};

bool cmp(Student s1, Student s2){
    return s1.height<s2.height;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Student student[10];
    for(int i=0; i<n; i++){
        string name;
        int height;
        int weight;
        cin>>name>>height>>weight;
        student[i] = Student(name,height,weight);
    }
    sort(student,student+n,cmp);
    for(int i=0; i<n; i++){
        cout<<student[i].name<<" "<<student[i].height<<" "<<student[i].weight;
        cout<<"\n";
    }
    return 0;
}