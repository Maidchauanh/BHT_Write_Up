#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    float a = log(n)/log(5);

    if(a == (int)a) 
        cout << "n co dang 5^m" << endl;
    else 
        cout << "n khong co dang 5^m" << endl;

    return 0;
}