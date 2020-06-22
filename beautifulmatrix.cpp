#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int n=5;
    int arr[n][n];
    int pos[2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]==1)
                {
                    pos[0]=i;
                    pos[1]=j;
                }
            }
    }
    int cnt= abs(pos[0]-2)+abs(pos[1]-2);
    cout<<cnt;
    return 0;
}