#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[4],temp[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
        temp[i]=arr[i];
    }
    sort(temp,temp+4);
    int x=temp[3];
    for(int i=0;i<4;i++)
    {
        arr[i]=x-arr[i];
    }
    for(int i=3;i>=0;i--)
    {
        if(arr[i]!=0)
            cout<<arr[i];
        if(i!=0 | arr[i]!=0)
            cout<<" ";
    }
    return 0;
}
