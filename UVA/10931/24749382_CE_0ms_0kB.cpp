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

void dec_bin(ull n, char ch[])
{
    int i = 0;

    while(n>0)
    {
        int x = n%2;

        ch[i] = x+48;

        n/=2;

        i++;
    }
}

int one_c(char ch[], int n)
{
    ull r = 0;
    int i;

    for(i=0; i<n; i++)
    {
        if(ch[i]=='1')
            r++;
    }

    return r;
}

int main ()
{
    ull n, x;
    char ch[1000];

    cin>>n;

    while(n!=0)
    {
        dec_bin(n, ch);
        x = one_c(ch, strlen(ch));

        printf("The parity of %s is %llu (mod 2).\n", strrev(ch), x);

        cin>>n;
    }
}
