/*
This series of katas will introduce you to basics of doing geometry with computers.

Point objects have attributes x and y.

Write a function calculating distance between Point a and Point b.

Input coordinates fit in range −50⩽x,y⩽50. Tests compare expected result and actual answer with tolerance of 1e-6.
*/

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

struct Point {
    double x;
    double y;
};

double distance_between_two_points(const Point& a, const Point& b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main() {
    Point a = {1, 6};
    Point b = {4, 2};
    cout << fixed << setprecision(6) << distance_between_two_points(a, b) << endl;
    return 0;
}