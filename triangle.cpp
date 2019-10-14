#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while (scanf("%d",&a)!=EOF){
        int b,c;
        cin>>b>>c;
        if(a==b && a == c)
            cout<<"Equilateral Triangle"<<endl;
        else if((a==b && a != c) || (b==c && b != a) || (a==c && a != b))
            cout<<"Isosceles Triangle"<<endl;
        else
            cout<<"Bad Triangle"<<endl;
    }
    return 0;
}
