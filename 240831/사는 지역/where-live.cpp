#include <iostream>
using namespace std;

class Student{
    public :
        string name;
        string address;
        string place;

        Student(string name, string address, string place){
            this->name = name;
            this->address = address;
            this->place = place;
        }
        Student(){}
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string name;
    string address;
    string place;
    cin>>n;

    Student student[10];
    for(int i=0; i<n; i++){
        cin>>name>>address>>place;
        student[i] = Student(name, address, place);
    }
    
    int last = 0;
    for(int i=0; i<n; i++){
        if(student[i].name >student[last].name)
            last = i;
    }

    cout<<"name "<<student[last].name<<"\n";
    cout<<"addr "<<student[last].address<<"\n";
    cout<<"city "<<student[last].place<<"\n";
    return 0;
}