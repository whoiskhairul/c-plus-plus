#include<bits/stdc++.h>
using namespace std;

int index(int lookup[],int elem)
{
    vector<int> myvec(lookup, lookup + sizeof(lookup) );
    int pos = find(myvec.begin(), myvec.end(), elem) - myvec.begin();
    if( pos < myvec.size() )
    return pos;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int id[n],s[n],tp[n],fts[n],ftstp[n][60];
        int x,y,u,r,subsum1,subsum2,tpsum1,tpsum2,count=0,sum=0;
        int rank[n];

        for(int j=1;j<=n;j++)
        {
            cin>>id[j]>>s[j]>>tp[j]>>fts[j];
            for(int k=1;k<=fts[j];k++)
            {
                cin>>ftstp[j][k];
            }
        }
        for(int p=1;p<=n;p++)
        {
            cin>>rank[p];
        }
        for(int p=1;p<n;p++)
        {
                r=rank[p];
                x=index(id,r);
                u=rank[p+1];
                y=index(id,u);

                subsum1=s[x]+fts[x];
                subsum2=s[y];
                tpsum1=tp[x];
                for(int a=1;a<fts[x];a++)
                {
                    tpsum1=tpsum1+ftstp[x][a];
                    tpsum2=tp[y];
                    cout<<"tp1="<<tpsum1<<" "<<"tp2="<<tpsum2<<endl;
                }

                if(subsum1>subsum2)
                {
                    sum++;
                }
                else if(subsum1==subsum2 && tpsum1>tpsum2)
                {
                    sum++;
                }
                else count++;

        }
        if(sum==n-1)
            cout<<"We respect our judges :)"<<endl;
        else if(count !=0)
            cout<<"Say no to rumour >:"<<endl;


    }
}
