#include<iostream>
using namespace std;
int main()
{
    string str1 , str2 ;
    char temp;
    cin>>str1>>str2;
    cout<<str1.size()<<" "<<str2.size()<<"\n"; 
    cout<<str1+str2<<"\n";
    temp=str1[0];
    str1[0]=str2[0];
    str2[0]=temp;
    cout<<str1<<" "<<str2;
}