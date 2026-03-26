#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0, test = 0;
    string word;
    getline(cin, word);
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] != ' ' && test == 0)
        {
            a = i;
            test++;
        }
        if (word[i] == ' ')
        {
            b = i;
        }
        else if (i == word.size() - 1)
        {
            b = i + 1;
        }
        if (b != 0)
        {
            reverse(word.begin() + a, word.begin() + b);
            test = 0;
            b = 0;
        }
    }
    cout << word;
    return 0;
}