/*
Write a function to split a string and convert it into an array of words.

Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]
"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
*/

#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> string_to_array(const string &s)
{
    vector<string> result;
    string temp;
    for (unsigned int i = 0; i < s.size(); i++)
    {
        if (isspace(s[i]))
        {
            if (!temp.empty())
            {
                result.push_back(temp);
                temp.clear();
            }
        }
        else
        {
            temp += s[i];
        }
    }

    if (!temp.empty())
    {
        result.push_back(temp);
    }

    if (s.empty())
    {
        return {""};
    }

    return result;
}

int main()
{
    for (auto &s : string_to_array("Robin Singh"))
    {
        cout << s << endl;
    }
    for (auto &s : string_to_array("CodeWars"))
    {
        cout << s << endl;
    }
    for (auto &s : string_to_array("I love arrays they are my favorite"))
    {
        cout << s << endl;
    }
    for (auto &s : string_to_array("1 2 3"))
    {
        cout << s << endl;
    }
    for (auto &s : string_to_array(""))
    {
        cout << s << endl;
    }
    return 0;
}
