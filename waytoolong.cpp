#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;
        int x=s.length();
        if(x>10)
            cout<<(s[0]+to_string(x-2)+s[x-1])<<endl;
        else
            cout<<s<<endl;
        t--;
    }
    
    return 0;
}