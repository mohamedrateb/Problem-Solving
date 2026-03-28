#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , count=0;
    string s;
    cin>>a>>b;
    cin>>s;
    if(s[a]=='-')
    {
        for(int i=0;i<s.size();i++)
        {
            if ((s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' ) && (i != a))
            {
                count++;
            }else{
                count=0;
                break;
            }
        }
        if(count==0)
        {
            cout<<"Yes";
        }else{
            cout << "No";
        }
    }else
    {
        cout<<"No";
    }
}