#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int x=0;
    x+= (n/100);
    n%=100;
    x+= (n/20);
    n%=20;
    x+= (n/10);
    n%=10;
    x+= (n/5);
    n%=5;
    x+=n;

    cout<<x;
    return 0;
}