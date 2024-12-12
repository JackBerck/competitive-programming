/*
This time no story, no theory. The examples below show you how to write function accum:

Examples:
accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"
The parameter of accum is a string which includes only letters from a..z and A..Z.
*/
#include <string>
#include <iostream>
using namespace std;

class Accumul
{
public:
    static string accum(const string &s) {
        string result;
        for (size_t i = 0; i < s.length(); ++i)
        {
            result += toupper(s[i]);
            for (size_t j = 0; j < i; ++j)
            {
                result += tolower(s[i]);
            }
            if (i != s.length() - 1)
            {
                result += "-";
            }
        }
        return result;
    }
};

int main()
{
    string input = "abcd";
    string output = Accumul::accum(input);
    cout << output << endl; // Output: A-Bb-Ccc-Dddd
    return 0;
}