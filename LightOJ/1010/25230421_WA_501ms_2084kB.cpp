#include <bits/stdc++.h>
 
using namespace std;
 
int mx_Kn(int n, int m)
{
 
    int mx = (m>n)?m:n;
    int mn = (m>n)?n:m;
 
    if(mn == 1)
        return mx;
 
 
    else if(mn==2)
    {
 
 
        int r = (mx/4)*4;
 
 
        if(mx%4>0)
        {
            r+= ((mx%4)==1)?2:4;
        }
 
    }
    else
    {
        return (((m * n) + 1) / 2);
    }
}
 
int main()
{
    int t, k;
 
    cin>>t;
 
    for(k=1; k<=t; k++)
    {
        int n, m;
 
        cin>>n>>m;
 
        int rslt = mx_Kn(n, m);
 
        printf("Case %d: %d\n", k, rslt);
    }
}
