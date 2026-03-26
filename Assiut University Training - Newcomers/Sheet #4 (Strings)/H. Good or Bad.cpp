#include <iostream>
using namespace std;
int main()
{
    string word;
    int test = 0, tcase;
    cin >> tcase;
    for (int j = 0; j < tcase; j++)
    {
        cin >> word;
        for (int i = 0; i < (word.length() - 2); i++)
        {
            if ((word[i] == '0' && word[i + 1] == '1' && word[i + 2] == '0') || (word[i] == '1' && word[i + 1] == '0' && word[i + 2] == '1'))
            {
                cout << "Good\n";
                test = 0;
                break;
            }
            else
            {
                test++;
            }
        }
        if (test != 0)
        {
            cout << "Bad\n";
        }
    }
}
