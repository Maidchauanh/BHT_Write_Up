#include<iostream>
using namespace std;

int main() {
    float T = 0.0f;
    float n = 1;

    do{
        T += 1/n;
        n++; 
    } while(1/n >= 1e-6);

    cout << T << endl;
    return 0;
}