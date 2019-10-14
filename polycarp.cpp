#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        long long int n,p,i,sum=0,arr[11];
        cin>>n>>p;
        for(int q=1;q<=10;q++)
        {
            arr[q]=(q*p)%10;
        }
        long long int temp=n/p;
        long long int y=temp%10;
        temp=temp/10;
        for(i=1;i<=10;i++)
        {
            sum=sum+arr[i];
        }
        sum=sum*temp;

        for(i=1;i<=y;i++)
        {
            sum=sum+arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
