#include<bits/stdc++.h>
using namespace std;
string AND(string c)
{
    for(int i=0;i<c.length-1;i++)
    {
        if(c[i]=='1' && c[i+1]=='1')
        {
            c[i+1]='1';
        }
        else
            c[i+1]='0';
    }
}
int main()
{
    string s,c,a;

    cin>>s>>c;
    if(s=='AND')
    {
        a=AND(c);
    }
    else if(s=='AND')
    {
        a=OR(c);
    }
    else if(s=='NOT')
    {
        a=NOT(c);
    }
    else if (s=='XOR')
    {
        a=XOR(c);
    }
}
