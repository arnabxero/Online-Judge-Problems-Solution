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
    ll int cr, c;

    cin>>num1>>num2;

    while(num1!=0 && num2!=0)
    {
        cr = 0;
        c = 0;

        while(num1>0 || num2>0)
        {
            cr = ((num1%10)+(num2%10)+cr)/10;

            num1/=10;
            num2/=10;
            c+=cr;

        }

        if(c==0)
            cout<<"No carry operation."<<endl;

        else
            cout<<c<<" carry operation."<<endl;


        cin>>num1>>num2;
    }
}
