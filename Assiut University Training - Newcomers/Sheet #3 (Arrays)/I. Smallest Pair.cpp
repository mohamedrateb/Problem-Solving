#include<iostream>
using namespace std;
int main()
{
   long long int tcase , nelment, num;
    cin>>tcase;
    for(int a=0;a<tcase ;a++)
    {
    cin>>nelment;
   long long int arr[nelment] ;
    for(int i=0;i<nelment ;i++)
    {
        cin>>arr[i];
    }
    num=arr[0]+arr[1]+1-0;
    for(int i=0;i<nelment;i++)
    {
        for(int j=i+1;j<nelment;j++)
        {
            if(num>(arr[i]+arr[j]+j-i))
            {
                num = arr[i] + arr[j] + j - i;
            }
        }

    }
    cout<<num<<"\n";
    }
    return 0;
}