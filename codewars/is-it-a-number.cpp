/*
Given a string s, write a method (function) that will return true if its a valid single integer or floating number or false if its not.

Valid examples, should return true:

isDigit("3")
isDigit("  3  ")
isDigit("-3.23")
should return false:

isDigit("3-4")
isDigit("  3   5")
isDigit("3 5")
isDigit("zero")
*/

#include <string>
#include <iostream>
#include <regex>
using namespace std;

bool isDigit(string s)
{
    regex r("^[-+]?[0-9]*\\.?[0-9]+$");
    return regex_match(s, r);
}

int main()
{
    cout << isDigit("3") << endl;
    cout << isDigit("  3  ") << endl;
    cout << isDigit("-3.23") << endl;
    cout << isDigit("3-4") << endl;
    cout << isDigit("  3   5") << endl;
    cout << isDigit("3 5") << endl;
    cout << isDigit("zero") << endl;
    return 0;
}