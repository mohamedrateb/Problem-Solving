#include <iostream>
using namespace std;
int main()
{
    int test = 0, index = 0, j = 0;
    string word, hello = "hello";
    cin >> word;
    for (int i = 0; i < hello.size(); i++)
    {
        for (; j < word.size(); j++)
        {
            if (hello[i] == word[j])
            {
                j++;
                test++;
                break;
            }
        }
    }
    if (test == hello.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
