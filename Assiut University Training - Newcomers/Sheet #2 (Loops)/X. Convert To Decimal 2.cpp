#include <iostream>
using namespace std;
int main()
{
    int tcase, number;
    cin >> tcase;
    for (int i = 0; i < tcase; i++)
    {
        cin >> number;
        int arr[50];
        int count = 0;
        int sum = 0, a = 1;
        while (number != 0)
        {
            arr[count] = number % 2;
            number /= 2;
            if (number != 1)
            {
                count++;
            }
        }
        for (int j = 0; j <= count; j++)
        {
            if (arr[j] == 1)
            {
                sum += (arr[j] * a);
                a *= 2;
            }
        }
        cout << sum << endl;
    }
    return 0;
}