#include <iostream>
using namespace std;
int main()
{
    int num;
    char cat;
    int word[27] = {0};
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> cat;
        word[cat - 97]++;
    }
    for (int i = 0; i < 27; i++)
    {
        if (word[i] > 0)
        {
            for (int j = 0; j < word[i]; j++)
            {
                cout << char(i + 97);
            }
        }
    }
}