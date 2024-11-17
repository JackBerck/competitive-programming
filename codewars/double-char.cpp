/*
Given a string, you have to return a string in which each character (case-sensitive) is repeated once.

Examples (Input -> Output):
* "String"      -> "SSttrriinngg"
* "Hello World" -> "HHeelllloo  WWoorrlldd"
* "1234!_ "     -> "11223344!!__  "
Good Luck!
*/

#include <iostream>
#include <string>
using namespace std;

string doubleChar(string str)
{
    string result = "";
    for (char ch : str)
    {
        result += ch;
        result += ch;
    }
    return result;
}

int main()
{
    cout << doubleChar("String") << endl;      // "SSttrriinngg"
    cout << doubleChar("Hello World") << endl; // "HHeelllloo  WWoorrlldd"
    cout << doubleChar("1234!_ ") << endl;     // "11223344!!__  "
    return 0;
}