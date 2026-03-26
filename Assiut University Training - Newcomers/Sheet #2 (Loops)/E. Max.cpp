#include <iostream>
using namespace std;
int main()
{
    int n, m, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m > x)
        {
            x = m;
        }
    }
    cout << x;
    return 0;
}