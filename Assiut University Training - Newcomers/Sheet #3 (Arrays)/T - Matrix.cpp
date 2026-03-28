#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    int arr[n][n];
    int a = 0, b = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        sum1 += arr[i][a];
        sum2 += arr[i][b - 1];
        a++;
        b--;
    }
    if ((sum1 - sum2) >= 0)
    {
        cout << sum1 - sum2;
    }
    else
    {
        cout << (sum1 - sum2) / -1;
    }
}