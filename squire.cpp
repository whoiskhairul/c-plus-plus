#include<bits/stdc++.h>
using namespace std;

int main()
{
    float r;
    int n;
    float pi = 2 * acos (0.0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>r;
        int a=(r*2);
        a=a*a;
        r=pi*(r*r);
        printf("Case %d: %.2f\n",i+1,a-r);
    }
}
