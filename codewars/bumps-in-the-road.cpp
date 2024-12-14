/*
Your car is old, it breaks easily. The shock absorbers are gone and you think it can handle about 15 more bumps before it dies totally.

Unfortunately for you, your drive is very bumpy! Given a string showing either flat road (_) or bumps (n). If you are able to reach home safely by encountering 15 bumps or less, return Woohoo!, otherwise return Car Dead
*/

#include <string>
#include <iostream>
using namespace std;

string bumps(string road){
  int bumps = 0;
  
  for(char &c: road) {
    if (c == 'n') {
      bumps++;
    }
  }
  
  if (bumps > 15) return "Car Dead";
  else return "Woohoo!";
}

int main()
{
    cout << bumps("n") << endl; // Output: Woohoo!
    cout << bumps("_nnnnnnn_n__n______nn__nn_nnn") << endl; // Output: Car Dead
    cout << bumps("______n___n_") << endl; // Output: Woohoo!
    return 0;
}