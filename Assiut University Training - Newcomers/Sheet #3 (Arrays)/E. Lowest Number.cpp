#include <iostream>
using namespace std;
int main()
{
    int n,low,index=0;
    cin >> n;
    int a[n];
    cin>>a[0];
    low=a[0];
    for(int i =1; i<n;i++)
    {
        cin>>a[i];
        if(low>a[i])
        {
            low=a[i];
            index=i;
        }
    }
    cout<<a[index]<<" "<<index+1;

}