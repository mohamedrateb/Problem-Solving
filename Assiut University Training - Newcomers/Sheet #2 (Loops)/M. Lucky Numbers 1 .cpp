#include <iostream>
using namespace std;
int main()
{
    int a, b, t2 = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        bool t1 = 0;
        int n = i;
        while (n)
        {
            int digt = n % 10;
            n /= 10;
            if (digt != 4 && digt != 7)
            {
                t1 = 1;
            }
        }
        if (t1 == 0)
        {
            cout << i << " ";
            t2 = 1;
        }
    }
    if (t2 == 0)
    {
        cout << -1;
    }
    return 0;
}
