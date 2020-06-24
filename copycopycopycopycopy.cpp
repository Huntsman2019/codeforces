#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int* arr=new int[n];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            while(i<n-1 && arr[i]==arr[i+1])
                i++;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}