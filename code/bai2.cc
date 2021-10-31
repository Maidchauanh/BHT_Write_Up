#include<iostream>
using namespace std;
int main() {
    int n, T;
    cin >> n;

    T = 0;

    while(n != 0) {
        T = T + n%10;
        n = n / 10;
    }

    cout << T << endl;
    return 0;
}