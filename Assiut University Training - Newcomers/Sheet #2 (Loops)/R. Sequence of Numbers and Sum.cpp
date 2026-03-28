#include<iostream>
using namespace std ;
int main()
{
    int sum=0;
    short int a , b ;
    while(true)
{
        sum=0;
        cin>>a>>b;
        if(a<=0 ||b<=0)
           break;
        
    if(b<a)
    {
        for(int i = b ;i<=a;i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
    }else
    {
        for(int i = a ;i<=b;i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
    } 
    
}
}