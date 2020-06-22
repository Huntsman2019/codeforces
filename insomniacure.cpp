#include <iostream>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int* arr=new int[d];
    int cnt=0;
    for(int i=0;i<d;i++)
    {
        int pos=i+1;
        if(pos%k==0 || pos%l==0 || pos%m==0 || pos%n==0)
        {
            cnt++;
            arr[i]=1;
        }
    }
    cout<<cnt;
    return 0;
}