#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c [n][50];
    for(int i=0;i<n*2;i++)
    {
        cin>>c[i];
    }

    transform(c.begin(), c.end(),c.begin(),toupper);

    for(int i=0;i<n*2;i++)
        if(i%2==1)
            cout<<" ";
        cout<<c[i];
        if(i%2==1)
            cout<<endl;
    }
}
