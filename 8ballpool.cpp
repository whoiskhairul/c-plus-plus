#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,p,r,arr[15],sum=0,x,count=0;
    cin>>t;
    int temp[15];
    for(int i=0;i<t;i++)
    {
        cin>>s>>p>>r;
        for(int j=1;j<=15;j++)
        {
            cin>>arr[j];
        }

        for(int j=1;j<=15;j++)
        {
            if(arr[j]==0)
            {
                count++;
            }
        }
        sum=sum+(count*p);
            if(arr[5]!=8 && arr[5]!=0 && (arr[11]!=8 | arr[15]!=8))
            {
                sum=sum+s;
            }
            else if(arr[5]!=8 && arr[5]!=0 && (arr[11]==8 ))
                    {
                        x=arr[5];
                        arr[5]=arr[11];
                        arr[11]=x;
                    }
            else if(arr[5]!=8 && arr[5]!=0 && (arr[15]==8 ))
                    {
                        x=arr[5];
                        arr[5]=arr[15];
                        arr[15]=x;
                    }
            if(((arr[11]>8 && arr[15] > 8) && (arr[11]!=0 | arr[15]!=0)) | ((arr[11]<8 && arr[15]<8) && (arr[11]!=0 | arr[15]!=0)))
            {
                sum=sum+s;
            }

        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
}
