#include <iostream>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n >> m;
    int arr[n][m];
    int freq[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            freq[arr[i][j]]++;
        }
    }
    cin >> x;
    if (freq[x] == 0)
    {
        cout << "will take number\n";
    }
    else
    {
        cout << "will not take number\n";
    }
}