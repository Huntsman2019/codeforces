#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=n;
    
    for(int i=0;i<n;i++)
    {
        if(i>0)
            cout<<"that ";
        cout<<"I ";
        if(i%2)
            cout<<"love ";
        else
            cout<<"hate ";
        
    }
    cout<<"it";
    return 0;
}