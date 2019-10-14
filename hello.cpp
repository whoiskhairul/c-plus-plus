#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, Number, count,sum;
    int n,t;
    cin>>t;
    for(int j=0;j<t;j++){
            sum=0;
    cin>>n;
  for(Number = 1; Number <= n; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
        sum=sum+Number;

    }
  }
    printf("%d\n",sum);
}
    return 0;
}
