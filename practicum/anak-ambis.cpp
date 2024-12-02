#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    int closest = numbers[0];
    for (int i = 1; i < n; i++)
    {
        if (abs(numbers[i]) < abs(closest) || (abs(numbers[i]) == abs(closest) && numbers[i] > closest))
        {
            closest = numbers[i];
        }
    }

    closest < 0 ? cout << -closest : cout << closest;

    return 0;
}