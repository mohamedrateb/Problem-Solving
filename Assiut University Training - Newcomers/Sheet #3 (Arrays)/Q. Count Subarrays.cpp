#include <iostream>
using namespace std;
int main()
{
    int num, tcase, test = 0, count = 0;
    cin >> tcase;
    for (int i = 0; i < tcase; i++)
    {
        cin >> num;
        int arr[num];
        count = 0;
        for (int i = 0; i < num; i++)
            cin >> arr[i];
        for (int i = 0; i < num; i++)
        {
            for (int j = i; j < num; j++)
            {
                test = 0;
                if (j == i)
                {
                    count++;
                    continue;
                }
                for (int k = i; k < j; k++)
                {
                    if (arr[k + 1] >= arr[k])
                    {
                        test++;
                    }
                    else
                    {
                        test = 0;
                        break;
                    }
                }
                if (test != 0)
                {
                    count++;
                    test = 0;
                }
            }
        }
        cout << count << "\n";
    }
}
