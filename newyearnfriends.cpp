#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    int min=arr[1];
    int dist=abs(arr[0]-min)+abs(arr[2]-min);
    cout<<dist;
    return 0;
}