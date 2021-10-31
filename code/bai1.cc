#include<iostream>
using namespace std;

int main() {

    int x, a;
    cin >> x;
    if ( x == 0 || x ==1 ) {
        cout << x << endl;
        return 0;
    }

    a = x * x;
    a = a * a * x;
    a = a * a * x;
    cout << a << endl;

    return 0;
}