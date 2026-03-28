#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  mynum, mynum1;
    stringstream r;
    stringstream r1;
    string num;
    cin >> num;
    char num1[num.length()];
    for (int i = (num.length() - 1); i >= 0; i--)
    {
        num1[(num.length() - 1) - i] = num[i];
    }
    r << num;
    r >> mynum;

    r1 << num1;
    r1 >> mynum1;
    cout << mynum1 << endl;
    if (mynum == mynum1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
