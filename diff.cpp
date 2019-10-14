#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i,d;
    scanf("%d",&t);
    while(t--)
    {

            scanf("%d",&n);
  int p[n];
        for (i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
            }
            sort(p,p+n);
        d=(p[n]-p[0])*2;
        printf("%d\n",d);
    }
    return 0;
}
