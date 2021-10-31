#include<iostream>
using namespace std;
int main() {
    int x, n;
    cin >> x >> n;
    int T = 0; 
    int a = -1, b = x*x;

    for(int i = 0; i <= n; i++) {
        T += a*b;
        a *= -1;
        b *= x*x;
    }

    return 0;
}