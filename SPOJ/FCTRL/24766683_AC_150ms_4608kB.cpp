//Arnab
///**************** Iftekhar Ahmed Arnab ****************///
///********** North East University Bangladesh **********///
///****************** ID: 190103020028 ******************///
///********************* 20th Batch *********************///
///**************** Session: Spring-2019 ****************///
///********* Current Semester : 4th(March, 2020) ********///
///************ Email : arnab.xero@gmail.com ************///


#include<bits/stdc++.h>

using namespace std;

int zero_counter(int n)
{
    long long int rslt = 0;

    int fct = 1;

    while(0<(n/fct))
    {
        fct*=5;

        rslt+=(n/fct);
    }

    return rslt;
}

int main ()
{
    long long int n;

    int t;

    cin>>t;

    while(t--)
    {
        cin>>n;

        cout<<zero_counter(n)<<endl;
    }
}