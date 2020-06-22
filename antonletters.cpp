#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt=0;
    for(int i=1;i<s.length()-1;i++)
    {
        int flg=0;
        for(int j=i+1;j<s.length()-1;j++)
        {
            if(s[j]==s[i] && j!=i)
                {
                    flg=1;
                }
        }
        if(flg==0 && s[i]!=',' && s[i]!='{' && s[i]!='}' && s[i]!=' ')
            {
                cnt++;
            }

}
    cout<<cnt;
    return 0;
}