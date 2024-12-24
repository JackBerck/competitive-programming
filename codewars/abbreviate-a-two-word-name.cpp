/*
Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

patrick feeney => P.F
*/
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string abbrevName(const string &name) {
    stringstream ss(name);
    string word;
    vector<string> words;
    
    while (ss >> word) {
        words.push_back(string(1, word[0]));
    }
  
    string result = "";
    for (unsigned int i = 0; i < words.size(); i++) {
        result += toupper(words[i][0]);
        if (i < words.size() - 1) {
            result += ".";
        }
    }
    
    return result;
}

int main() {
  abbrevName("Sam Harris");
  return 0;
}