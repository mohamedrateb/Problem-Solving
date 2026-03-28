#include <iostream>
using namespace std;
int main()
{
    int n ,m ,k;
    cin>>n>>m>>k;
    if(n/2==k || k<n/2)
    {
      cout<<k;   
    } else if(n%2!=0 && k>n/2 && m>0)
    {
            cout<<(n/2)+1;
    
    }else if(n%2==0 && k>n/2)
    {
        cout<<n/2;
    }else if(n==0 || k==0)
    {
        cout<<0;
    }
    
}