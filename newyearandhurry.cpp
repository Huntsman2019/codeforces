#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;  //n=no. of probs, k= time to reach 
    cin>>n>>k;
    int time=4*60-k;
    int cnt=0;
    for(i=1;i<=n;i++)
    {
        int solvetime=5*i;
        if(solvetime>time)
        {
            cout<<cnt;
            break;
        }
        cnt++;
        time-=solvetime;
    }
    if(i>n)
    cout<<n;
    return 0;
}