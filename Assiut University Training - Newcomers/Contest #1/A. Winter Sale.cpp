#include<iostream>
using namespace std ;
int main()
{
    double discount, be_price, af_price;
    cin>>discount>>af_price;
    be_price=af_price/((100-discount)/100);
    cout<<be_price;
}