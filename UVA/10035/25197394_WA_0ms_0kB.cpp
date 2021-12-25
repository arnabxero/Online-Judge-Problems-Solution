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
    ll int cr = 0, c = 0, tmp, w;

    cin>>num1>>num2;

    while(num1!=0 && num2!=0)
    {
        ll int mn, mx;

        mn = (num1>=num2)?num2:num1;
        mx = (num1>=num2)?num1:num2;

        while(num1>0 || num2>0)
        {
            tmp = last_dig(num1)+last_dig(num2)+cr;
            num1 = num1/10;
            num2 = num2/10;
            cr = 0;

            if(tmp>9)
            {
                w = tmp-(last_dig(tmp));
                cr = w/10;
                c+=cr;
            }
        }

        if(c!=0)
            cout<<c<<" carry operation."<<endl;
        else cout<<"No carry operation."<<endl;

        c = 0;

        cin>>num1>>num2;
    }
}
