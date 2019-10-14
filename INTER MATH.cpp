#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long double t1,t2;
    cin>>n;
    long double d[n],v[n],u[n],t3[n];
    for(i=0;i<n;i++)
    {
        cin>>d[i]>>v[i]>>u[i];
    }
    for(i=0;i<n;i++)
    {
        if(v[i]>=u[i]){
            cout<<"can't determine"<<endl;
            continue;
        }
        else
        {
            t1=d[i]/u[i];
            t2=(d[i]/(sqrt(u[i]*u[i]-v[i]*v[i])));
            t3[i]=t2-t1;

            /*if(t3[i]<0)
            cout<<"can't determine"<<endl;
            else
                {*/
                    cout<<fixed<<setprecision(3)<<"Case "<<i+1<<":"<<" "<<t3[i];
                    if(i<n-1)
                        cout<<endl;
        }
    }
    return 0;
}
