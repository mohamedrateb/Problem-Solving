#include <iostream>
using namespace std;
int main()
{
    int nelment, test = 0;
    long long int largnum = 0;

    cin >> nelment;
    int arrA[nelment];
    int arrB[nelment];
    for (int i = 0; i < nelment; i++)
    {
        cin >> arrA[i];
        if (arrA[i] > largnum)
        {
            largnum = arrA[i];
        }
    }
    int freq1[largnum + 1] = {0};
    int freq2[largnum + 1] = {0};
    for (int i = 0; i < nelment; i++)
    {
        cin >> arrB[i];
        freq1[arrA[i]]++;
        freq2[arrB[i]]++;
    }
    for (int j = 0; j < nelment; j++)
    {
        if (freq1[arrA[j]] == freq2[arrA[j]])
        {
        }
        else
        {
            cout << "no";
            test++;
            break;
        }
    }
    if (test == 0)
    {
        cout << "yes";
    }
}