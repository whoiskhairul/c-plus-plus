#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        for(int i=2;i<=n;i++)
        {
            long long int sum=1,count=0;
            sum=sum*i;
            for(int k=1;k<n;k++)
            {
                if(sum%k!=0)
                {
                    count++;
                    break;
                }
            }
            if(count==0){
                cout<<sum<<endl;
                break;
            }

        }
    }
}
