#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string* s=new string[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=="Tetrahedron")
            sum+=4;
        else if(s[i]=="Cube")
            sum+=6;
        else if(s[i]=="Octahedron")
            sum+=8;
        else if(s[i]=="Dodecahedron")
            sum+=12;
        else if(s[i]=="Icosahedron")
            sum+=20;
    }

    cout<<sum;

    return 0;
}