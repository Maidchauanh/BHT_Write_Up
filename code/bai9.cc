#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    bool soChinhPhuong = false;

    while(true) {
        if(i*i == n) {
            soChinhPhuong = true;
            break;
        }
        else if (i*i > n) 
            break;
        i++;
    }

    if (soChinhPhuong) 
        cout << "n la so chinh phuong" << endl;
    else 
        cout << "n khong la so chinh phuong" << endl;

    return 0;
}