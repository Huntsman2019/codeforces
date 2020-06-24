#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int acnt=0,dcnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            acnt++;
        else
            dcnt++;
    }
    if(acnt>dcnt)
        cout<<"Anton";
    else if(acnt<dcnt)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}