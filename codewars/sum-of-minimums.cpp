/*
Given a 2D ( nested ) list ( array, vector, .. ) of size m * n, your task is to find the sum of the minimum values in each row.

For Example:

[ [ 1, 2, 3, 4, 5 ]        #  minimum value of row is 1
, [ 5, 6, 7, 8, 9 ]        #  minimum value of row is 5
, [ 20, 21, 34, 56, 100 ]  #  minimum value of row is 20
]
So the function should return 26 because the sum of the minimums is 1 + 5 + 20 = 26.

Note: You will always be given a non-empty list containing positive values.

ENJOY CODING :)
*/

#include <iostream>
#include <vector>
using namespace std;

int sum_of_minimums(const vector<vector<int>>& numbers)
{
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        int min = numbers[i][0];
        for (int j = 1; j < numbers[i].size(); j++)
        {
            if (numbers[i][j] < min)
            {
                min = numbers[i][j];
            }
        }
        sum += min;
    }
    return sum;
}

int main() {
    vector<vector<int>> numbers = {
        {1, 2, 3, 4, 5},
        {5, 6, 7, 8, 9},
        {20, 21, 34, 56, 100}
    };
    cout << sum_of_minimums(numbers) << endl; // 26
    return 0;
}