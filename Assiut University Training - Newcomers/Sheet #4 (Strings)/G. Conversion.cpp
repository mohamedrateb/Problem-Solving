#include<iostream>
using namespace std;
int main()
{
   string orgin;
   cin>>orgin;
   for(int i=0 ; i<orgin.length() ; i++)
   {
    if(orgin[i]==',')
    {
        orgin[i]=' ';
    }else if(int(orgin[i])>=97)
    {
        orgin[i] = char(int(orgin[i]-32));
    }
    else{
        orgin[i] = char(int(orgin[i] + 32));
    }
   }
   cout<<orgin;
}