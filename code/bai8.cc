#include<iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if(x == y && y == z) 
        cout << "tam giac deu" << endl;
    else if(x == y || y == z || x == z) 
        if(x*x == y*y + z*z ||
           y*y == x*x + z*z ||
           z*z == x*x + y*y)
            cout << "tam giac vuong can" << endl;
        else 
            cout << "tam giac can" << endl;

    else if(x*x == y*y + z*z ||
            y*y == x*x + z*z ||
            z*z == x*x + y*y)
            cout << "tam giac vuong" << endl;

    else if(x*x < y*y + z*z ||
            y*y < x*x + z*z ||
            z*z < x*x + y*y)
            cout << "tam giac tu" << endl;
    else 
        cout << "tam giac thuong" << endl;
    return 0;
}