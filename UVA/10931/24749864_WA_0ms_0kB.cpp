///**************** Iftekhar Ahmed Arnab ****************///
///********** North East University Bangladesh **********///
///****************** ID: 190103020028 ******************///
///********************* 20th Batch *********************///
///**************** Session: Spring-2019 ****************///
///********* Current Semester : 4th(March, 2020) ********///
///************ Email : arnab.xero@gmail.com ************///


#include<bits/stdc++.h>
#include<string.h>
#define ull unsigned long long int

using namespace std;

int dec_bin(ull n, char ch[])
{
    int i = 0;

    while(n>0)
    {
        int x = n%2;

        ch[i] = x+48;

        n/=2;

        i++;
    }
    return i;
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

void strrev(char ch[], ull n, char ch2[])
{
    int i=0, j;

    for(j=n-1; j>=0; j--)
    {
        cout<<ch[i];

        ch2[j] = ch[i];
        i++;
    }
    ch2[n] = '\0';
}

int main ()
{
    ull n, x;
    char ch2[1000];

    cin>>n;

    while(n!=0)
    {
        char ch[1000];

        int i;
        int len = dec_bin(n, ch);
        x = one_c(ch, strlen(ch));
        //strrev(ch, strlen(ch), ch2);

        printf("The parity of ");

        for(i=len-1; i>=0; i--)
            cout<<ch[i];

        printf(" is %llu (mod 2).\n", x);

        cin>>n;
    }
}
