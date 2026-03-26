#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    for(int i =1 ;i<=n;i++)
    {
        for(int a =n-i ;a>=1 ;a--)
        {
            cout<<" ";
        }
        for(int j=1 ;j<=i;j++)
        {
            if(j>=2)
            {
               cout<<"**"; 
            }else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--)
    {
       for(int j =n-i;j>0;j--)
     {
        cout<<" ";
      }
       for(int a =i ;a>0;a--)
       {if(a>=2)
       {
        cout<<"**";
       }else
       {
        cout<<"*";
       }
        
       }
       cout<<endl;
    }
}