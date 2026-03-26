#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, fpar, spar;
    string word, wnt;
    char mchar;
    cin >> n >> q;
    cin >> word;
    for (int i = 0; i < q; i++)
    {
        cin >> wnt;
        if (wnt == "pop_back")
        {
            word.pop_back();
        }
        else if (wnt == "front")
        {
            cout << word.front() << "\n";
        }
        else if (wnt == "back")
        {
            cout << word.back() << "\n";
        }
        else if (wnt == "sort")
        {
            cin >> fpar >> spar;

            sort(word.begin() + min(fpar, spar) - 1, word.begin() + max(fpar, spar));
        }
        else if (wnt == "reverse")
        {
            cin >> fpar >> spar;
            reverse(word.begin() + min(fpar, spar) - 1, word.begin() + max(fpar, spar));
        }
        else if (wnt == "print")
        {
            cin >> fpar;
            cout << word[fpar - 1] << "\n";
        }
        else if (wnt == "substr")
        {
            cin >> fpar >> spar;
            for (int i = min(fpar, spar) - 1; i <= max(fpar, spar) - 1; i++)
            {
                cout << word[i];
            }
            cout << "\n";
        }
        else
        {
            cin >> mchar;
            word.push_back(mchar);
        }
    }
}
