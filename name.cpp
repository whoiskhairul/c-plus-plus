#include<string>
#include<ctype.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    string s[100],k;
    for(i=1;i<=n+1;i++)
    {
        getline(cin,s[i]);
        k=s[i];
        int m=0;
        while(k[m]!='\0')
        {
            k[m]=toupper(k[m]);
            m++;
        }
        if(i>1)
        cout<<"Case "<<i-1<<": "<<k<<endl;
    }
}
