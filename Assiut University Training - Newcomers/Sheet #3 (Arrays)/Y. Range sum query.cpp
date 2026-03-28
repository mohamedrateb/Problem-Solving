#include <iostream>
using namespace std;
int main()
{
    int n, q, l, r;
    cin >> n >> q;
    long long int arr[n];
    long long int prefix[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            prefix[i] = arr[i];
        }
        else
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }
    }
    for (int j = 0; j < q; j++)
    {
        cin >> l >> r;
        if ((l == 1))
        {
            cout << prefix[r - 1] << endl;
        }
        else
        {
            cout << prefix[r - 1] - prefix[l - 2] << endl;
        }
    }
    return 0;
}
