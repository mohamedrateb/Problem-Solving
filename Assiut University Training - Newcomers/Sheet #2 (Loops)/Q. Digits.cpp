#include<iostream>
using namespace std;
int main()
{
    short int tcase;
    cin >>tcase;
    for(int i=1 ;i<=tcase;i++)
    {
   int a;
    cin>>a;
    int b=a;
    while (b>=0)
    {
        cout<<b%10<<" ";
        b/=10;
        if(b==0)
        break;
    }
    cout<<"\n";
    }
    
    
    return 0;
}