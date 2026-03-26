#include<iostream>
using namespace std;
int main()
{
    int a ;
    int sum=0;
    cin>>a;
    int arr[a];
    for(int i=0 ; i<a ;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
return 0;
}