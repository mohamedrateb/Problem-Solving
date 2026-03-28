#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b , index1,index2,num,temp;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
        if(i==0||arr[i]>a)
        {
            a=arr[i];
            index1=i;
        }
        if (i == 0 || arr[i] < b)
        {
            b = arr[i];
            index2 = i;
        }
    }
    temp=arr[index1];
    arr[index1]=arr[index2];
    arr[index2]=temp;
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
}