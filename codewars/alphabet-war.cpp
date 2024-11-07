/*
Introduction
There is a war and nobody knows - the alphabet war!
There are two groups of hostile letters. The tension between left side letters and right side letters was too high and the war began.

Task
Write a function that accepts fight string consists of only small letters and return who wins the fight. When the left side wins return Left side wins!, when the right side wins return Right side wins!, in other case return Let's fight again!.

The left side letters and their power:

 w - 4
 p - 3
 b - 2
 s - 1
The right side letters and their power:

 m - 4
 q - 3
 d - 2
 z - 1
The other letters don't have power and are only victims.

Example
AlphabetWar("z");        //=> Right side wins!
AlphabetWar("zdqmwpbs"); //=> Let's fight again!
AlphabetWar("zzzzs");    //=> Right side wins!
AlphabetWar("wwwwwwz");  //=> Left side wins!
*/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string alphabetWar(string fight)
{
    unordered_map<char, int> leftPower = {
        {'w', 4},
        {'p', 3},
        {'b', 2},
        {'s', 1}};

    unordered_map<char, int> rightPower = {
        {'m', 4},
        {'q', 3},
        {'d', 2},
        {'z', 1}};

    int leftScore = 0;
    int rightScore = 0;

    for (char ch : fight)
    {
        if (leftPower.find(ch) != leftPower.end())
        {
            leftScore += leftPower[ch];
        }
        else if (rightPower.find(ch) != rightPower.end())
        {
            rightScore += rightPower[ch];
        }
    }

    if (leftScore > rightScore)
    {
        return "Left side wins!";
    }
    else if (rightScore > leftScore)
    {
        return "Right side wins!";
    }
    else
    {
        return "Let's fight again!";
    }
}

int main()
{
    string fight = "zdqmwpbs";

    cout << alphabetWar(fight);

    return 0;
}