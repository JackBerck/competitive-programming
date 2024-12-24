/*
Task
Given a list of digits, return the smallest number that could be formed from these digits, using the digits only once (ignore duplicates). Only positive integers in the range of 1 to 9 will be passed to the function.

Examples
[1, 3, 1] ==> 13
[5, 7, 5, 9, 7] ==> 579
[1, 9, 3, 1, 7, 4, 6, 6, 7]  ==> 134679
*/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

unsigned long long minValue(vector<int> values)
{
    sort(values.begin(), values.end());

    values.erase(unique(values.begin(), values.end()), values.end());

    unsigned long long result = 0;
    for (unsigned int i = 0; i < values.size(); i++)
    {
        result = result * 10 + values[i];
    }

    return result;
}