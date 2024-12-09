/*
Your task is to create a function that does four basic mathematical operations.

The function should take three arguments - operation(string/char), value1(number), value2(number).
The function should return result of numbers after applying the chosen operation.

Examples(Operator, value1, value2) --> output
('+', 4, 7) --> 11
('-', 15, 18) --> -3
('*', 5, 5) --> 25
('/', 49, 7) --> 7
*/

#include <iostream>
using namespace std;

int basicOp(char op, int val1, int val2) {
    switch (op) {
        case '+':
            return val1 + val2;
        case '-':
            return val1 - val2;
        case '*':
            return val1 * val2;
        case '/':
            return val1 / val2;
    }
}

int main() {
    cout << basicOp('+', 4, 7) << endl; // 11
    cout << basicOp('-', 15, 18) << endl; // -3
    cout << basicOp('*', 5, 5) << endl; // 25
    cout << basicOp('/', 49, 7) << endl; // 7
    return 0;
}