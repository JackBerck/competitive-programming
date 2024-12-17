/*
Your function takes two arguments:

current father's age (years)
current age of his son (years)
Сalculate how many years ago the father was twice as old as his son (or in how many years he will be twice as old). The answer is always greater or equal to 0, no matter if it was in the past or it is in the future.
*/

#include <iostream>
using namespace std;

int twice_as_old(int dad, int son) {
    return abs(dad - 2 * son);
}

int main() {
    cout << twice_as_old(36, 7) << endl;
    cout << twice_as_old(55, 30) << endl;
    cout << twice_as_old(42, 21) << endl;
    cout << twice_as_old(22, 1) << endl;

    return 0;
}