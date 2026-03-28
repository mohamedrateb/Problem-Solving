#include <iostream>
using namespace std;
int main()
{
    int x ,y, odd=0 , even=0 , pos=0 , neg=0;
    cin>>x;
    for(int i = 0 ; i<x ; i++)
    {
        cin>>y;
        if(y>0)
        {
            pos++;
        }else if(y<0)
        {
            neg++;
        }

        if(y%2==0)
        {
            even++;
        }else
        {
            odd++;
        }
    }
    cout << "Even: " << even << "\nOdd: " << odd << "\nPositive: " << pos << "\nNegative: "<<neg;
}