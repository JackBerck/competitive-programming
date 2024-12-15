/*
Given a string, capitalize the letters that occupy even indexes and odd indexes separately, and return as shown below. Index 0 will be considered even.

For example, capitalize("abcdef") = ['AbCdEf', 'aBcDeF']. See test cases for more examples.

The input will be a lowercase string with no spaces.

Good luck!

If you like this Kata, please try:
*/

#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

pair<string, string> capitalize(const string &s)
{
  string string1 = "", string2 = "";
  
  int i = 0;
  for(char c : s) {
    if(i % 2 != 0) {
      string1 += toupper(c);
    } else {
      string1 += c;
    }
    i++;
  }
  
  int j = 0;
  for(char c : s) {
    if(j % 2 == 0) {
      string2 += toupper(c);
    } else {
      string2 += c;
    }
    j++;
  }
  
  return {string2, string1};
}

int main() {
    pair<string, string> result = capitalize("abcdef");
    cout << result.first << " " << result.second << endl;
    return 0;
}