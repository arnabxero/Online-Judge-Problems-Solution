#include<bits/stdc++.h>
#define ll long long

using namespace std;

int last_dig(ll int x)
{
    if(x>0)
        return x%10;
    return 0;
}

int main()
{
    ll int num1, num2;

    int cr, c;

    while(scanf("%lld %lld", &num1, &num2)==2)
    {
        if(num1==0 && num2==0)
            break;

        c=0;
        cr=0;

        while(num1>0||num2>0)
        {
            cr=((last_dig(num1))+(last_dig(num2))+cr)/10;
            num1/=10;
            num2/=10;
            c+=cr;
        }

        if(c==0)
            printf("No carry operation.\n");

        else if(c==1)
            printf("1 carry operation.\n");

        else
            printf("%d carry operations.\n", c);
    }
    return 0;
}
