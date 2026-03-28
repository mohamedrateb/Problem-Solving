/*#include <iostream>
#include <string>
using namespace std;
int main()
{

    int tcase;
    cin >> tcase;
    for (int j = 0; j < tcase; j++)
    {
        int n = -1, m = 0, x = 1, num, max = -100000;
        cin >> num;
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }

        while (true)
        {
            n++;
            m++;
            max = -100000;
            for (int i = n; i < m; i++)
            {
                if (max < arr[i])
                    max = arr[i];
            }
            cout << max << " ";
            if ((m - n) == num)
            {
                break;
            }
            if (m == num)
            {
                x++;
                n = -1;
                m = x - 1;
            }
        }
        cout << "\n";
    }
    return 0;
}*/

#include <iostream>
#include <string>
using namespace std;
int main()
{

    int tcase, num, max = -100000;
    cin >> tcase;
    for (int j = 0; j < tcase; j++)
    {
        cin >> num;
        int arr[num];
        for (int i = 0; i < num; i++)
            cin >> arr[i];

        for (int i = 0; i < num; i++)
        {
            for (int j = i; j < num; j++)
            {
                max = -100000;
                for (int k = i; k <= j; k++)
                {
                    if (max < arr[k])
                    {
                        max = arr[k];
                    }
                }
                cout << max << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
