/*
Simple, given a string of words, return the length of the shortest word(s).

String will never be empty and you do not need to account for different data types.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int find_short(string str)
{
  stringstream ss(str);
  string word;
  vector<string> words;
  
  while (ss >> word) {
    words.push_back(word);
  }
  
  unsigned int temp = words[0].size();
  for(unsigned int i = 0; i < words.size(); i++) {
    if(temp > words[i + 1].size()) {
      temp = words[i + 1].size();
    }
  }
  
  return temp;
}

int main()
{
  cout << find_short("bitcoin take over the world maybe who knows perhaps") << endl;
  cout << find_short("turns out random test cases are easier than writing out basic ones") << endl;
  cout << find_short("lets talk about javascript the best language") << endl;
  cout << find_short("i want to travel the world writing code one day") << endl;
}