#include <iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c=='z')
    { 
        c='a';
        cout<<c;
    }else
    {
        
    cout<<char(c+1);
    }
      
}