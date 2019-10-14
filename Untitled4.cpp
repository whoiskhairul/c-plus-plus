#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        sum=sum+i;
    }
    m=__gcd(n,sum);
    cout<<sum<<endl;
    cout<<m<<endl;

}
