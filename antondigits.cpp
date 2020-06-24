#include <bits/stdc++.h>
using namespace std;
int minnum(int a,int b,int c)
{
    if(a<=b && a<=c)
        return 2;
    else if(b<=a && b<=c)
        return 5;
    else
        return 6;
}
int main()
{
    int n2,n3,n5,n6;
    cin>>n2>>n3>>n5>>n6;
    int min=minnum(n2,n5,n6);
    int sum=0;
    if(min==2)
    {
        while(n2>0)
        {
            sum+=256;
            n2--;
            n5--;
            n6--;
        } 
    }
    else if(min==5)
    {
        while(n5>0)
        {
            sum+=256;
            n2--;
            n5--;
            n6--;
        }
    }
    else
    {
        while(n6>0)
        {
            sum+=256;
            n2--;
            n5--;
            n6--;
        }
        
    }
    while(n2>0 && n3>0)
        {
            sum+=32;
            n2--;
            n3--;
        }

    cout<<sum;
    return 0;
}