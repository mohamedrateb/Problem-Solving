#include <iostream>
using namespace std;
int main()
{
    /*
    Print ,  or  (without quotes) as described in the statement.


    double is when a number has a floating-point.

int Range: [−2147483648,2147483647
].

long long can hold values of a bigger range than that of int.


    */
double n , k , a;
cin>>n>>k>>a;
int x;
long double y =(n*k)/a;
long long int z=y;
x=y;
if(y>z)
{
cout<<"double";
}else
{
    if(z==x)
    {
        cout<<"int";
    }else
    {
        cout<<"long long";
    }
}

}