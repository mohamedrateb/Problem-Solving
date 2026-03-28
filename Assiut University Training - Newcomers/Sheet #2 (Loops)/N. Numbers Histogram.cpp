#include<iostream>
using namespace std;
int main()
{
    char s;
    short int n , x;
    cin>>s>>n;
    for(int i =0 ;i<n;i++)
    {
        cin>>x;
        for(int i=0 ;i<x;i++)
        {
            cout<<s;
        }
        cout<<endl;
    }
    return 0;
}