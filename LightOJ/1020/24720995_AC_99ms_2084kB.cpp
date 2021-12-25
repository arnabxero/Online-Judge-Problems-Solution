///**************** Iftekhar Ahmed Arnab ****************///
///********** North East University Bangladesh **********///
///****************** ID: 190103020028 ******************///
///********************* 20th Batch *********************///
///**************** Session: Spring-2019 ****************///
///********* Current Semester : 4th(March, 2020) ********///
///************ Email : arnab.xero@gmail.com ************///

#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t, j;

    cin>>t;

    for(j=1; j<=t; j++)
    {
        long long int x;
        char ch[6];

        cin>>x>>ch;

        printf("Case %d: ", j);

        if(ch[0]=='A')
        {
            if(x%3==1)
                printf("Bob\n");
            else
                printf("Alice\n");
        }
        else
        {
            if(x%3==1 || x%3==2)
                printf("Bob\n");
            else
                printf("Alice\n");
        }
    }
}
