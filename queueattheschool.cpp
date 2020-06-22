#include <iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    while(t)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
                {
                    s[i]='G';
                    s[i+1]='B';
                    i++;
                }
        }
        t--;
    }
    cout<<s;
}