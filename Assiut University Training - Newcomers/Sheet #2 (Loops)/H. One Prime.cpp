#include <iostream>
using namespace std;
int main()
{
    int n;
    bool x = 1;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            if (n == 2)
            {
                x = 1;
            }
            else
            {
                x = 0;
            }
            break;
        }
        else
        {
            x = 1;
        }
    }
    if (x == 1 && n != 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}