#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;  //k-cost per banana, n-money he has,w-no. of bananas wanted
    cin>>k>>n>>w;
    int money=0;
    for(int i=1;i<=w;i++)
    {   
        money+=k*i;
    }
    if((n-money)<0)
        cout<<(money-n);
    else
        cout<<0;
    
    return 0;
}