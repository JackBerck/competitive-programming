/*
The solution would work like the following:

get_even_numbers({2,4,5,6}) => {2,4,6}
*/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> get_even_numbers(const vector<int> &numbers)
{
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main()
{
    vector<int> numbers = {2, 4, 5, 6};
    vector<int> result = get_even_numbers(numbers); // {2,4,6}
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}