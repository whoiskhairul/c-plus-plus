#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long n,k,i,temp;
    cin>>n>>k;
    temp=n;
    for(i=1;i<k;i++)
    {
        cout<<temp<<endl;
        temp=n+pow(10,k)*temp;

        cout<<i<<" "<<temp<<" "<<n<<" "<<pow(10,k)<<endl;
    }
    cout<<temp<<endl;
}
