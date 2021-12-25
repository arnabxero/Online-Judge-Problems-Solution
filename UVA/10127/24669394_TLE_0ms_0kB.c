#include<stdio.h>
#define ll long long

/*ll int one_cnt(ll int x)
{
    ll int c = 0;

    while(x>0)
    {
        c++;
        x = x/10;
    }
    return c;
}

ll int one_chk(ll int x)
{
    ll int r = 1;

    while(x>0)
    {
        if(x%10!=1)
        {
            r = 0;
            break;
        }
        x = x/10;
    }
    return r;
}

ll int one_mult(ll int n)
{
    ll int i = 1, r = -2;

    while(one_chk(n*i)!=1)
    {
        i++;
    }
    if(one_chk(n*i)==1)
        r = one_cnt(n*i);

    return r;
}*/

ll int one_mult(ll int n)
{
    ll int r = 1, c = 1;

    while(r%n!=0)
    {
        r = (r*10)+1;
        c++;
    }
    return c;
}

int main ()
{
    long long int n;

    while(scanf("%lld", &n)==1)
    {
        long long int x = one_mult(n);

        printf("%lld\n", x);
    }
    return 0;
}

