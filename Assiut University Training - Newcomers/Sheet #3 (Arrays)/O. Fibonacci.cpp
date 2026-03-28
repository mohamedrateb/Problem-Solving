#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    long long int arr[num];
    for (int i = 0; i < num; i++)
    {
        if (i <= 1)
        {
            arr[0] = 0;
            arr[1] = 1;
        }
        else
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    }
    cout << arr[num - 1];
}