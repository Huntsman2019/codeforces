#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long arr[3];
        long long sum=0;
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        cout<<sum/2<<endl;
        
    }
    return 0;
}