#include <bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    cin>>year;
    if((year%4==0 && year%100!=0) || year%400==0)
        cout<<"12.09."<<year<<"leap year"<<endl;
    else
        cout<<"13.09."<<year<<"not leap year"<<endl;
    return 0;
}
