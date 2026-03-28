#include<iostream>
using namespace std ;
int main()
{
    int num, test=1, test1=0 ;
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
        while (true)
        {
            for (int i = 0; i < num; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    arr[i] /= 2;
                    if (i == num - 1)
                    {
                        test1++;
                    }
                }
                else
                {
                    test = 0;
                    break;
                }
            }
            if (test == 0)
            {
                break;
            }
        }
        cout << test1 << " ";
    }