#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n  , x , y;
    cin>>n;
    int arr[n];
    for( int i = 0 ; i<n ;i++)
    {
        cin>>arr[i];  
    }
    cin>>x;
    for( int j = 0 ; j<n ;j++)
    {
        if(arr[j]==x)
        {
            y=j;
            break;
        }
        else
        {
            y=-1;
        }
    }
    cout<<y<<endl;
}