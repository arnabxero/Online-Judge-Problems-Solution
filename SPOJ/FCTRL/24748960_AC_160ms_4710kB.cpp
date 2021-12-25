///**************** Iftekhar Ahmed Arnab ****************///
///********** North East University Bangladesh **********///
///****************** ID: 190103020028 ******************///
///********************* 20th Batch *********************///
///**************** Session: Spring-2019 ****************///
///********* Current Semester : 4th(March, 2020) ********///
///************ Email : arnab.xero@gmail.com ************///


#include<bits/stdc++.h>
#define ull unsigned long long int

using namespace std;


int zero(ull n)
{
    ull r = 0;
    ull f = 1;

    while((n/f)>0)
    {
        f*=5;
        r+=(n/f);
    }

    return r;
}

int main ()
{
    int t;
    ull r, n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        r = zero(n);

        cout<<r<<endl;
    }
}
