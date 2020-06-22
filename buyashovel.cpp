#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    for(int i=1;;i++)
    {
        int price=k*i;
        int rem=price%10;
        if(rem==r || rem==0)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}