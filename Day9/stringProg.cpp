#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:";
    cin>>s;
    string res="";
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' and s[i]<='Z') s[i]=s[i]-'A'+'a';
        int count=s[i]-'a'+1;
        for(int j=0;j<count;j++) res+=s[i];
    }
    cout<<res<<" ";
     
    return 0;
}

//This program converts a string into another string that consists of the alphabetical occurence of the characters present in the string
