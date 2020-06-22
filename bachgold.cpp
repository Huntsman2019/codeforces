#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int k=n/2;
    cout<<k<<endl;

    for(int i=0;i<k;i++)
    {
        if(i==(k-1) && n%2==0)
        {
            cout<<2;
            break;
        }
        if(i==(k-1) && n%2!=0)
        {
            cout<<3;
            break;
        }
        cout<<2<<" ";
    }
    return 0;
}