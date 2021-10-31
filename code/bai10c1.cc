#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 0, s = 1;

    while(s <= n) {
        if(s == n) {
            cout << "n co dang 5^m" << endl;
            return 0;
        } 
        s *= 5;
        m++;
    }

    cout << "n khong co dang 5^m" << endl;
    return 0;
}