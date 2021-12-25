#include<bits/stdc++.h>

using namespace std;

int check(int brr, int arr)
{
    int r = 0;

    if(brr == arr)
        r = 1;

    return r;
}

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

    for(i=1; i<=len; i++)
        if(check(s[i], q[i])==1)
            cout<<i<<" ";
}

