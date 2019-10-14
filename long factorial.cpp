#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
    unsigned long long sum=1;

        sum=sum*n;
        n--;
        if(n>0){
            extraLongFactorials(n);}

    cout<<sum<<endl;


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}

