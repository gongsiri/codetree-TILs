#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    int sum = c+b*60+a*1440;
    if(sum<16511) cout<<"-1";
    else cout<<sum-16511;

    return 0;
}