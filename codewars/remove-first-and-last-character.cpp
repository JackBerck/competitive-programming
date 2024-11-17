/*
It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. You're given one parameter, the original string. You don't have to worry about strings with less than two characters.
*/

#include <iostream>
#include <string>
using namespace std;

string removeFirstAndLastCharacter(string str)
{
    return str.substr(1, str.size() - 2);
}

int main()
{
    cout << removeFirstAndLastCharacter("Hello") << endl; // "ell"
    cout << removeFirstAndLastCharacter("World") << endl; // "orl"
    return 0;
}