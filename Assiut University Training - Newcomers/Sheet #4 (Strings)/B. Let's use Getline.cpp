#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] == '\\')
        {
            break;
        }
        else
        {
            cout << name[i];
        }
    }
    return 0;
}
