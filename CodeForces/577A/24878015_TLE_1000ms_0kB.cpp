#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int i, j, n, x;

    cin>>n>>x;

    int c = 0;

    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i*j==x)
                c++;

    cout<<c<<endl;
}
