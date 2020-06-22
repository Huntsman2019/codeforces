#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int cnt=0;
    int minscore=arr[k-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=minscore && arr[i]>0)
            cnt++;
    }
    cout<<cnt;
    return 0;
}