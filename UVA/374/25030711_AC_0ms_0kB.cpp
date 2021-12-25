#include<bits/stdc++.h>
//arnab
using namespace std;

int b, m, p;

int bigmod(int b,int p,int m)
{
    if(p==0) return 1;

    if(p%2==0)
    {
        int x = bigmod(b, p/2, m);
        return (x*x)%m;
    }
    else
    {
        return ((b%m)*(bigmod(b, p-1, m)))%m;
    }
}

int main ()
{
    while(scanf("%d %d %d", &b, &p, &m)==3)
    {
        int r = bigmod(b, p, m);

        cout<<r<<endl;
    }
}