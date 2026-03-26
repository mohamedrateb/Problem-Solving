#include <iostream>
using namespace std;
int main()
{
    int points = 0, num;
    string word;
    cin >> num;
    cin >> word;
    for (int i = 0; i < word.size(); i++)
    {
        switch (word[i])
        {
        case 'W':
            points += 2;
            break;
        case 'V':
            points += 5;
            break;

        case 'X':
            if (i != word.size() - 1)
            {
                word[i + 1] = '#';
            }
            break;
        case 'Y':
            if (i != word.size() - 1)
            {
                word.push_back(word[i + 1]);
                word[i + 1] = '#';
            }
            break;
        case 'Z':
            if (i != word.size() - 1 && word[i + 1] == 'V')
            {
                points /= 5;
                word[i + 1] = '#';
            }
            else if (i != word.size() - 1 && word[i + 1] == 'W')
            {
                points /= 2;
                word[i + 1] = '#';
            }
            break;
        }
    }
    cout << points;
    return 0;
}