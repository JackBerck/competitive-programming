/*
Complete the method which accepts an array of integers, and returns one of the following:

"yes, ascending" - if the numbers in the array are sorted in an ascending order
"yes, descending" - if the numbers in the array are sorted in a descending order
"no" - otherwise
You can assume the array will always be valid, and there will always be one correct answer.
*/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

string is_sorted_and_how(vector<int> array)
{
  if(array[0] < array[1]) {
    for(unsigned int i = 0; i < array.size(); i++) {
      if (array[i] > array[i + 1] && i < array.size() - 1) {
        return "no";
      }
    }
    return "yes, ascending";
  } else {
    for(unsigned int i = 0; i < array.size(); i++) {
      if (array[i] < array[i + 1] && i < array.size() - 1) {
        return "no";
      }
    }
    return "yes, descending";
  }
}

int main() {
    cout << is_sorted_and_how({1, 2}) << endl;
    cout << is_sorted_and_how({15, 7, 3, -8}) << endl;
    cout << is_sorted_and_how({4, 2, 30}) << endl;

    return 0;
}