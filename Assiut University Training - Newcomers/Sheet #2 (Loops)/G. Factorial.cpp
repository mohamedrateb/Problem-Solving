#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long int fact = 1;
        int m = 0;
        cin >> m;
        for (int j = 1; j <= m; j++)
        {
            fact = fact * j;
        }
        cout << fact << endl;
    }
    return 0;
}