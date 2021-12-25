#include<bits/stdc++.h>

using namespace std;

int bin_dec(long long int n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

int main()
{
    long long int n;

    cin>>n;

    int x = bin_dec(n);
    int c = 0;

    while(x!=1)
    {
        c++;
        if(x%2)
            x++;
        else x/=2;
    }

    cout<<c<<endl;
}
