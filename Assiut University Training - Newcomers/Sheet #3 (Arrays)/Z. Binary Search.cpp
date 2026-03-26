#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n ,q ,nq;
    cin>>n>>q;
    int arr[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int j=0;j<q;j++)
    {
        cin>>nq;
        int start=0 ,end=n-1,mid=(start+end)/2 ,count=0;
        while(start<=end)
        {
             mid = (start + end) / 2;
             if(arr[mid]==nq)
             {
                 cout << "found" << endl;
                 count++;
                 break;
             }else if(arr[mid]>nq)
             {
                end=mid-1;
             }else
             {
                start=mid+1;
             }
        }
        if(count==0)
        {
            cout << "not found"<<endl;
                }
    }
}
