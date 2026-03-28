#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for(int i =2 ; i<=num ;i++)
    {
        int test =0;
        for(int j =2 ;j<=i;j++)
        {
            if(i%j==0 && i!=j)
            {
               test++;  
            }
        }
        if(test==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
