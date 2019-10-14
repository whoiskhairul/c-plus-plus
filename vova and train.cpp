#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j;
    cin>>t;
    for(j=0;j<t;j++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=(a/b)-((d/b)-(c-1)/b);
        cout<<ans<<endl;

    }
}
