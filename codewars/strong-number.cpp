/*
Strong number is a number with the sum of the factorial of its digits is equal to the number itself.

For example, 145 is strong, because 1! + 4! + 5! = 1 + 24 + 120 = 145.

Task
Given a positive number, find if it is strong or not, and return either "STRONG!!!!" or "Not Strong !!".

Examples
1 is a strong number, because 1! = 1, so return "STRONG!!!!".
123 is not a strong number, because 1! + 2! + 3! = 9 is not equal to 123, so return "Not Strong !!".
145 is a strong number, because 1! + 4! + 5! = 1 + 24 + 120 = 145, so return "STRONG!!!!".
150 is not a strong number, because 1! + 5! + 0! = 122 is not equal to 150, so return "Not Strong !!".
*/
#include <string>
#include <vector>
#include <iostream>
using namespace std; 

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

string strong_num(int number) {
    vector<int> eachNumber;
    
    int numberLength = number;
    while (numberLength) {
        eachNumber.push_back(numberLength % 10);
        numberLength /= 10;
    }
    
    int result = 0;
    for (int digit : eachNumber) {
        result += factorial(digit);
    }
    
    return result == number ? "STRONG!!!!" : "Not Strong !!";
}

int main()
{
    cout << strong_num(1) << endl;    // "STRONG!!!!"
    cout << strong_num(123) << endl;  // "Not Strong !!"
    cout << strong_num(145) << endl;  // "STRONG!!!!"
    cout << strong_num(150) << endl;  // "Not Strong !!"
    return 0;
}