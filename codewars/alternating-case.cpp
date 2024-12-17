/*
altERnaTIng cAsE <=> ALTerNAtiNG CaSe
Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase. For example:

"hello world".toAlternatingCase() === "HELLO WORLD"
"HELLO WORLD".toAlternatingCase() === "hello world"
"hello WORLD".toAlternatingCase() === "HELLO world"
"HeLLo WoRLD".toAlternatingCase() === "hEllO wOrld"
"12345".toAlternatingCase()       === "12345"                   // Non-alphabetical characters are unaffected
"1a2b3c4d5e".toAlternatingCase()  === "1A2B3C4D5E"
"String.prototype.toAlternatingCase".toAlternatingCase() === "sTRING.PROTOTYPE.TOaLTERNATINGcASE"
As usual, your function/method should be pure, i.e. it should not mutate the original string.
*/

#include <string>
#include <cctype>
#include <iostream>
using namespace std;

string to_alternating_case(const string& str)
{
  string result;
  for(char c: str) {
    if(isdigit(c)) {
      result += c;
    } else {
      if(isupper(c)) {
        result += tolower(c);
      } else {
        result += toupper(c);
      }
    }
  }
  
  return result;
}

int main() {
    cout << to_alternating_case("hello world") << endl;
    cout << to_alternating_case("HELLO WORLD") << endl;
    cout << to_alternating_case("hello WORLD") << endl;
    cout << to_alternating_case("HeLLo WoRLD") << endl;
    cout << to_alternating_case("12345") << endl;
    cout << to_alternating_case("1a2b3c4d5e") << endl;
    cout << to_alternating_case("1A2B3C4D5E") << endl;
    cout << to_alternating_case("1a2B3c4D5e") << endl;

    return 0;
}