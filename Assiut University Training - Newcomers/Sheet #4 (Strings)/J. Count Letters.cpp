#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    int freq[26]={0};
    cin>>word;
    for(int i=0;i<word.length();i++)
    {
        freq[word[i]-97]++;
    }
    for(int j=0;j<26;j++)
    {
        if(freq[j]!=0)
        {
            cout<<char(j+97)<<" : "<<freq[j]<<"\n";
        }
    }
}