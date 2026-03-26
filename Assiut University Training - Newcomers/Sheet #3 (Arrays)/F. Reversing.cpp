#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 1; i <= num; i++)
    {
        cin >> arr[i];
    }
    for (int i = num; i >=1; i--)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}