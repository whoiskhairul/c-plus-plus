#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n;
    int arr[n];
    for(k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    sort(arr,arr+n);
    int x=arr[n-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(x%arr[i]==0  )
            {
                arr[i]=0;
            }
        }
    }
    sort(arr,arr+n);
    int y=arr[n-1];
    cout<<x<<" "<<y<<endl;
    return 0;
}
