#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j,count=0;
        cin>>n;
        int stock[n];
        for(j=0;j<n;j++)
        {
            cin>>stock[j];
        }
        for(j=0;j<n-1;j++)
        {
            if(stock[j]<stock[j+1])
            {
                count=count+(stock[j+1]-stock[j]);
            }
        }
        if(stock[0]==0)
        {
            cout << count-stock[1]<<endl;
        }
        else
            cout<<count<<endl;
    }
}
