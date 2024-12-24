/*
In this simple exercise, you will create a program that will take two lists of integers, a and b. Each list will consist of 3 positive integers above 0, representing the dimensions of cuboids a and b. You must find the difference of the cuboids' volumes regardless of which is bigger.

For example, if the parameters passed are ([2, 2, 3], [5, 4, 1]), the volume of a is 12 and the volume of b is 20. Therefore, the function should return 8.

Your function will be tested with pre-made examples as well as random ones.

If you can, try writing it in one line of code.
*/

#include <vector>
#include <numeric>
#include <functional>
#include <array>
using namespace std;

int find_difference(vector<int> a, vector<int> b) {
    return abs(accumulate(a.begin(), a.end(), 1, multiplies<int>()) - accumulate(b.begin(), b.end(), 1, multiplies<int>()));
}

int main() {
  find_difference({2, 2, 3}, {5, 4, 1});
  return 0;
}