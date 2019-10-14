#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,tempr,tempn,tempm;
    cin>>n;
    String name[n];
    int roll[n],mark[n];
    for(int i=0;i<n;i++)
    {
        cin>>roll[i];
        getline (cin, name);
        cin>>mark[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(mark[i]>mark[j])
            {
                tempm=mark[i];
                tempn=name[i];
                tempr=roll[i];

                mark[i]=mark[j];
                mark[j]=tempm;

                name[i]=name[j];
                name[j]=tempn;

                roll[i]=roll[j];
                roll[j]=tempr;
            }
            else if(mark[i]==mark[j])
            {
                if(roll[i]>roll[j])
                {
                tempm=mark[i];
                tempn=name[i];
                tempr=roll[i];

                mark[i]=mark[j];
                mark[j]=tempm;

                name[i]=name[j];
                name[j]=tempn;

                roll[i]=roll[j];
                roll[j]=tempr;
                }
            }
        }
        cout<<"Roll | Name       | Marks"<<endl;
        for(int i=0;i<n;i++)
        {
            printf(" %d | %d         | %d",roll[i],name[i],mark[i]);
        }
    }

    return 0;
}

