/*
Given an unsorted array of 3 positive integers [ n1, n2, n3 ], determine if it is possible to form a Pythagorean Triple using those 3 integers.

A Pythagorean Triple consists of arranging 3 integers, such that:

a2 + b2 = c2

Examples
[5, 3, 4] : it is possible to form a Pythagorean Triple using these 3 integers: 32 + 42 = 52

[3, 4, 5] : it is possible to form a Pythagorean Triple using these 3 integers: 32 + 42 = 52

[13, 12, 5] : it is possible to form a Pythagorean Triple using these 3 integers: 52 + 122 = 132

[100, 3, 999] : it is NOT possible to form a Pythagorean Triple using these 3 integers - no matter how you arrange them, you will never find a way to satisfy the equation a2 + b2 = c2

Return Values
For Python: return True or False
For JavaScript: return true or false
Other languages: return 1 or 0 or refer to Sample Tests.
*/

#include <iostream>
using namespace std;

bool PythagoreanTriple(const int a, const int b, const int c)
{
  if (a > b && a > c){
    return b * b + c * c == a * a ? true : false;
  } else if (b > a && b > c) {
    return a * a + c * c == b * b ? true : false;
  } else {
    return b * b + a * a == c * c ? true : false;
  }
}

int main() {
    cout << PythagoreanTriple(5, 3, 4) << endl;
    cout << PythagoreanTriple(3, 4, 5) << endl;
    cout << PythagoreanTriple(13, 12, 5) << endl;
    cout << PythagoreanTriple(100, 3, 999) << endl;

    return 0;
}