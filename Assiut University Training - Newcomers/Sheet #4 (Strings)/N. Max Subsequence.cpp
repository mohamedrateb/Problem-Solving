#include <iostream>
using namespace std;
int main()
{
    int index, count = 1;
    cin >> index;
    string word;
    cin >> word;
    for (int i = 1; i < index; i++)
    {
        if (word[i - 1] != word[i])
        {
            count++;
        }
    }
    cout << count << endl;
}
