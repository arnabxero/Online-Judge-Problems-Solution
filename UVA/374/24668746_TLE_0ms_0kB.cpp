#include<bits/stdc++.h>
#define ll long long

using namespace std;

long long int m, b, p;

int bigmod(long long int b, long long int p, long long int m)
{
    if(p==1) return b;

    if(p%2==0)
    {
        long long int x = (bigmod(b, p/2, m))%m;
        return (x*x)%m;
    }
    long long int y = (bigmod(b, (p-1)/2, m))%m;
    return ((b%m)*(y*y)%m)%m;
}

int main ()
{
    while(scanf("%lld %lld %lld", &b, &p, &m)==3)
    {
        int r = bigmod(b, p, m);

        cout<<r<<endl;
    }
}
