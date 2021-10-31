#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i*i == n) {
            cout << "n la so chinh phuong" << endl;
            return 0;
        }
    }

    cout << "n khong phai la so chinh phuong" << endl;
    return 0;
}