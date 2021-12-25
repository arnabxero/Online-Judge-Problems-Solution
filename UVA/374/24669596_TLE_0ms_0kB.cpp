#include<bits/stdc++.h>
#define ll long long

using namespace std;

long long int b;
int m, p;

int bigmod(long long int b,int p,int m)
{
    if(p==1) return b;

    if(p%2==0)
    {
        long long int x = (bigmod(b, p/2, m))%m;
        return (x*x)%m;
    }
    else if(p%2==1)
    {
        return ((b%m)*(bigmod(b, p-1, m)))%m;
    }
}

int main ()
{
    while(scanf("%lld %d %d", &b, &p, &m)==3)
    {
        int r = bigmod(b, p, m);

        cout<<r<<endl;
    }
}
