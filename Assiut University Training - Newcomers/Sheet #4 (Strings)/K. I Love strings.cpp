#include<iostream>
using namespace std;
int main()
{
    string frist , last;
    int tcase;
    cin>>tcase;
    for(int i=0;i<tcase;i++)
    {
        cin>>frist>>last;
        if(frist.length()>last.length())
        {
            for(int j=0;j<frist.length();j++)
            {
                if(j>=last.length())
                {
                    cout<<frist[j];
                }else
                {
                    cout<<frist[j]<<last[j];
                }
            }
        }else
        {
            for (int j = 0; j < last.length(); j++)
            {
                if (j >= frist.length())
                {
                    cout << last[j];
                }
                else
                {
                    cout << frist[j] << last[j];
                }
            }
        }
        cout<<"\n";
    }
}