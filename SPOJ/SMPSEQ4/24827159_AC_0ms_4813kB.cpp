#include<bits/stdc++.h>
//arnab
using namespace std;

int check(int n, int arr[], int m)
{
    int i, r = 0;

    for(i=0; i<m; i++)
        if(arr[i]==n)
        {
            r = 1;
            break;
        }
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

    for(i=0; i<m; i++)
        cin>>q[i];

    for(i=0; i<n; i++)
        if(check(s[i], q, m)==1)
            cout<<s[i]<<" ";
}