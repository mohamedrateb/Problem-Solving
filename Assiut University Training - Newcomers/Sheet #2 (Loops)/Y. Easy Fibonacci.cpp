#include<iostream>
using namespace std ;
int main()
{
    short int tcase ;
    int c1=0,c2=1 ,c3=1;
    cin>>tcase;
    cout<<c1<<" ";
    for(int i =1; i<tcase;i++)
    {
        if(i==2)
        {
            cout<<"1"<<" ";
        }else
        {
           c3=c1+c2;
        cout<<c3<<" ";
        c1=c2;
        c2=c3; 
        }
         
    }
    return 0;
}
