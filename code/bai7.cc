#include<iostream>
using namespace std;

int main() {
    int n;
    int a = -2, b = 3, c = 7;
    cin >> n;

    for(int i = 2; i <= n; i++) {
        b *= 3;
        c *= 7;
        a = 5*a + 2*b - 6*c + 12;
    }

    cout << a << endl;

    return 0;
}
