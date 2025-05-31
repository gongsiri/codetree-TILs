#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int number;

class Num{
    public:
        int number;
        int index;
        Num(int number, int index){
            this->number = number;
            this->index = index;
        }
};

bool cmp(const Num &a, const Num &b){
    if(a.number == b.number) return a.index < b.index;
    return a.number < b.number;
}

int main() {
    cin >> N;
    vector<Num> nums;
    vector<int> result(N);

    for (int i = 0; i <N; i++) {
        cin >> number;
        nums.push_back(Num(number,i));
    }

    sort(nums.begin(),nums.end(),cmp);

    for(int i=0; i<N; i++){
        int newIndex = nums[i].index;
        result[newIndex] = i;
    }

    for(int i=0; i<N; i++){
        cout<<result[i]+1<<" ";
    }
    // Please write your code here.

    return 0;
}
