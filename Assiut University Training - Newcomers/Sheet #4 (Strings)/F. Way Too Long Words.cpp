#include<iostream>
using namespace std;
int main()
{
    string word;
    int tcase;
    cin>>tcase;
  for(int i=0;i<tcase;i++)
    {
        cin>>word;
        if(word.length()>10)
        {
            cout << word[0] << word.length()-2 <<word[word.length()-1]<<endl;
        }else
        {
            cout<<word<<endl;
        }
    }
}