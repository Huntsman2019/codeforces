#include <bits/stdc++.h>
using namespace std;
void swap(char* x,char* y)
{
    char* t=x;
    x=y;
    y=t;
}
int main()
{
    string s;
    cin>>s;
    int l=(s.length());

    for(int i=0;i<l;i+=2)
    {
        for(int j=0;j<l-i-1;j+=2)
        {
            if(s[j]>s[j+2])
                swap(s[j],s[j+2]);
        }
    }
    cout<<s;
    return 0;
}