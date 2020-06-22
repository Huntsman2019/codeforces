#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        if(n==0 || n==1)
            cout<<0<<endl;        
        else if(n==2)
            cout<<m<<endl;
        else
            cout<<(2*m)<<endl;
        
    }
    return 0;
}