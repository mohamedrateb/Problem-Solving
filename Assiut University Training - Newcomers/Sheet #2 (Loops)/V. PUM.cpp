#include<bits/stdc++.h>
using namespace std ;
int main()
{
    short int n;
    int count = 1;
    cin>>n;
    for(int i=0 ;i<n;i++)
    {
        for(int j =1 ;j<=3;j++)
        {
            if(count%4==0)
            {
                count++;
                cout<<count<<" ";
                 count++;
            }else
            {
                cout<<count<<" ";
                count++;
            }
           
        } 
        cout<<"PUM"<<endl;
    }
}