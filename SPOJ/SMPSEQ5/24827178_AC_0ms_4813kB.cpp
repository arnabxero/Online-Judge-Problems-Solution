#include<bits/stdc++.h>
//arnab
using namespace std;

int main ()
{
    int n, m, i, j;

    cin>>n;

    int s[n];

    for(i=0; i<n; i++)
        cin>>s[i];

    cin>>m;

    int q[m];

    int len = (n>=m)?m:n;

    for(i=0; i<m; i++)
        cin>>q[i];

    for(i=0; i<len; i++)
        if(s[i]==q[i])
            cout<<(i+1)<<" ";
}
