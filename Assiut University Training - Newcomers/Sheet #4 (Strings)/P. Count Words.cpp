#include<iostream>
using namespace std ;
int main()
{
    string word;
    int count=0;
    getline(cin,word);
    for(int i=0;i<word.length();i++)
    {
        if (((int(word[i]) >= 65 && int(word[i]) <= 90) && (i == 0 || word[i - 1] == ' ' || word[i - 1] == '!' || word[i - 1] == '?' || word[i - 1] == ',' || word[i - 1] == '.')) 
        || ((int(word[i]) >= 97 && int(word[i]) <= 122) && (i == 0 || word[i - 1] == ' ' || word[i - 1] == '!' || word[i - 1] == '?' || word[i - 1] == ',' || word[i - 1] == '.')))
        {
            count++;
        }
    }
    cout<<count;
}