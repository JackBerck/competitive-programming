/*
Task
Given a string str, reverse it and omit all non-alphabetic characters.

Example
For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".

Input/Output
[input] string str
A string consists of lowercase latin letters, digits and symbols.

[output] a string
*/

#include <iostream>
using namespace std;

string reverse_letter(const string &str)
{
    string result = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (isalpha(str[i]))
        {
            result += str[i];
        }
    }
    return result;
}

int main()
{
    cout << reverse_letter("krishan") << endl; // nahsirk
    cout << reverse_letter("ultr53o?n") << endl; // nortlu
    return 0;
}