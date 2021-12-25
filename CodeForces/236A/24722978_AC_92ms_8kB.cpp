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
    char ch[105];

    cin>>ch;

    int i, d = 0;

    int n = strlen(ch);

    sort(ch, ch+n);

    for(i=0; i<n; i++)
    {
        if(ch[i]==ch[i+1])
            d++;
    }

    n = n-d;

    if(n%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
