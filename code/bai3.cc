#include<iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    float T = 0, tu = 1, mau = 0;

    for(int i = 1; i <= n; i++) {
        tu *= x;
        mau += i;
        T = T + tu/mau;
    }

    cout << T << endl;
    return 0;
}