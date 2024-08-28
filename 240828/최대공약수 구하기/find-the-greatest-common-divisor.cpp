#include <iostream>
#include <algorithm>

using namespace std;

void printFun(int n, int m) {
    int gcd = 0;
    for(int i = 1; i <= min(n, m); i++) {
        if(n % i == 0 && m % i == 0)
            gcd = i;
    }

    cout << gcd;
}

int main() {
    int n, m;
    cin >> n >> m;

    printFun(n, m);
    
    return 0;
}