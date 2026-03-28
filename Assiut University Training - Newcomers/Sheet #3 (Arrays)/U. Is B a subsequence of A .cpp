#include <iostream>
using namespace std;
int main()
{
    int n, m, test = 0, index = 0, num = 0, test1 = 0, x;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (i == 1)
        {
            num = 1;
        }
        if (index == n - 1)
        {
            test++;
            break;
        }
        for (int j = index + num; j < n; j++)
        {
            if (arr2[i] == arr1[j])
            {
                if (index <= j)
                {
                    index = j;
                }
                else
                {
                    test++;
                    break;
                }
                test1++;
                break;
            }
        }
    }
    if (test == 0 && test1 != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
