/*
Description:
Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

Examples
replace("Hi!") === "H!!"
replace("!Hi! Hi!") === "!H!! H!!"
replace("aeiou") === "!!!!!"
replace("ABCDE") === "!BCD!"
*/

#include <iostream>
using namespace std;

string replace(const string &s)
{
    string result = "";
    for (char c : s)
    {
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
        {
            c = '!';
        }
        result += c;
    }
    return result;
}

int main()
{
    cout << replace("aeiou") << endl;    // "!!!!!"
    cout << replace("hello") << endl;    // "h!ll!"
    cout << replace("codewars") << endl; // "c!d!w!rs"
    return 0;
}