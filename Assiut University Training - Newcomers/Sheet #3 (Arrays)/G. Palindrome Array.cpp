#include<iostream>
using namespace std;
int main()
{
    int num , num1=0 , test =1;
    int arr[100000];
    int arr1[100000];
    cin>>num;
    for(int i = 0;i<num;i++)
    {
        cin>>arr[i];
    }
    for (int j = num - 1; j >= 0; j--)
        {
            arr1[j] = arr[num1];
            num1++;
        }
    for (int i = 0; i < num; i++)
    {
             if(arr1[i] == arr[i])
             {

             }else
           {
                 test=0;
             }
    }
    if(test==1)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    return 0;
}