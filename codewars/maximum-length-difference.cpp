/*
You are given two arrays a1 and a2 of strings. Each string is composed with letters from a to z. Let x be any string in the first array and y be any string in the second array.

Find max(abs(length(x) − length(y)))

If a1 and/or a2 are empty return -1 in each language except in Haskell (F#) where you will return Nothing (None).

Example:
a1 = ["hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"]
a2 = ["cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"]
mxdiflg(a1, a2) --> 13
Bash note:
input : 2 strings with substrings separated by ,
output: number as a string
*/
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class MaxDiffLength
{
public:
    static int mxdiflg(vector<string> &a1, vector<string> &a2) {
        if (a1.empty() || a2.empty()) return -1;
        
        int maxDiff = 0;
        for (string x : a1) {
            for (string y : a2) {
                maxDiff = max(maxDiff, abs((int)x.length() - (int)y.length()));
            }
        }
        
        return maxDiff;
    }
};

int main()
{
    vector<string> a1 = {"hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"};
    vector<string> a2 = {"cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"};
    cout << MaxDiffLength::mxdiflg(a1, a2) << endl;  // 13
    return 0;
}
