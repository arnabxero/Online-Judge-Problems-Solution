//Arnab
///**************** Iftekhar Ahmed Arnab ****************///
///********** North East University Bangladesh **********///
///****************** ID: 190103020028 ******************///
///********************* 20th Batch *********************///
///**************** Session: Spring-2019 ****************///
///********* Current Semester : 4th(March, 2020) ********///
///************ Email : arnab.xero@gmail.com ************///


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int x[300000], j = 1, i, rslt = 0, len;

        x[0] = 0;

        char ch[300000];

        cin>>ch;

        len = strlen(ch);

        for(i=0; i<len; i++)
            if(ch[i] == 'R')
                x[j++] = i+1;

        x[j] = len+1;

        for(i=0; i<j; i++)
        {
            int tmp = x[i+1]-x[i];

            rslt = (rslt>tmp)?rslt:tmp;
        }

        cout<<rslt<<endl;
    }
}