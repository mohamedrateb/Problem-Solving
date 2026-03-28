#include<bits/stdc++.h>
using namespace std ;
int main()
{
    short int a , b ,t;
    int sum =0;
    cin>>t;
    for(int i=0 ;i<t;i++)
    {
        sum=0;
        cin>>a>>b;
        if(a<b)
        {
           for(int j = a; j<=b;j++)
        {
            if(j%2!=0  && j!=a && j!=b)
            {
                sum+=j;
            }
        }
        cout<<sum<<endl; 
        }else
        {
            for(int j = b; j<=a;j++)
        {
            if(j%2!=0  && j!=a && j!=b)
            {
                sum+=j;
            }
        }
        cout<<sum<<endl; 
        }
        
    }
}