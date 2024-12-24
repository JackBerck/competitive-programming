/*
Find the total sum of internal angles (in degrees) in an n-sided simple polygon. N will be greater than 2.
*/

#include <iostream>
using namespace std;

int angle(int n) {
    return (n - 2) * 180;
}

int main() {
    cout << angle(3) << endl; // 180
    cout << angle(4) << endl; // 360
    return 0;
}