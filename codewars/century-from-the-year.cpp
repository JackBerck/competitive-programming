/*
Introduction
The first century spans from the year 1 up to and including the year 100, the second century - from the year 101 up to and including the year 200, etc.

Task
Given a year, return the century it is in.

Examples
1705 --> 18
1900 --> 19
1601 --> 17
2000 --> 20
2742 --> 28
*/

#include <iostream>
using namespace std;

int centuryFromYear(int year) 
{
  int result = year / 100;
  return year % 100 == 0 ? result : result + 1;
}

int main() {
    cout << centuryFromYear(1705) << endl;
    cout << centuryFromYear(1900) << endl;
    cout << centuryFromYear(1601) << endl;
    cout << centuryFromYear(2000) << endl;
    cout << centuryFromYear(2742) << endl;

    return 0;
}