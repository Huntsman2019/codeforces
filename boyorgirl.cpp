#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i]))
        {
            for(int j=i+1;j<s.length();j++)
            {
                if(isalpha(s[j]))
                {
                    if(s[i]==s[j])
                    {
                        s[j]='1';
                    } 
                    
                }   
            }
            cnt++;
        }
    }
    if(cnt%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    
    return 0;
}