#include<iostream>
using namespace std;
int main()
{
    int  x , y , a ;
    cin>>x>>y;
    if(x>y)
    {
        for(int i=1 ; i<=y ; i++)
        {
            if(x%i==0 && y%i==0)
            {
                a=i;
            } 
        }
    }
    else
    {
        for (int i = 1; i <=x; i++)
        {
            if (x % i == 0 && y % i == 0)
            {
                a = i;
            }
        }
    }
    cout<<a;
    return 0 ;
}