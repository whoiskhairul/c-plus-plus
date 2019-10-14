#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n;
        //float pi=3.141593;
        cin>>n;
        printf("%.4f\n",(atan(1)*4)*(n*n));
    }
    return 0;
}
