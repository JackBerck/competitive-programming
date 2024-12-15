/*
Create a function that takes 2 integers in form of a string as an input, and outputs the sum (also as a string):

Example: (Input1, Input2 -->Output)

"4",  "5" --> "9"
"34", "5" --> "39"
"", "" --> "0"
"2", "" --> "2"
"-5", "3" --> "-2"
Notes:

If either input is an empty string, consider it as zero.

Inputs and the expected output will never exceed the signed 32-bit integer limit (2^31 - 1)
*/

#include <string>
#include <iostream>
using namespace std;

string sum_str(const string &a, const string &b) {
    int x = a.empty() ? 0 : stoi(a);
    int y = b.empty() ? 0 : stoi(b);
    return to_string(x + y);
}

int main() {
    cout << sum_str("4", "5") << endl;
    cout << sum_str("34", "5") << endl;
    cout << sum_str("", "") << endl;
    cout << sum_str("2", "") << endl;
    cout << sum_str("-5", "3") << endl;

    return 0;
}