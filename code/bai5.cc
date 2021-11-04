#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    float s = sqrt(x);
    for(int i = 2; i <= n; i++) {
        x *= x;
        s = sqrt(x + s);
    }

    return 0;
}