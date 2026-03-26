#include <iostream>
using namespace std;
int main()
{
    int x , y , z;
    cin>>x;
    y=x%10;
    z=x/10;
    if(y%z==0 || z%y==0)
       cout<<"YES";
    else
       cout<<"NO";
}