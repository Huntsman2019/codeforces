#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int cnt=0;
    while(n)
    {
        int rem=n%10;
        if(rem==7 || rem==4)
            cnt++;
        n/=10;
    }

        if(cnt==4 || cnt==7)
            cout<<"YES";
        else
            cout<<"NO";

    return 0;
}