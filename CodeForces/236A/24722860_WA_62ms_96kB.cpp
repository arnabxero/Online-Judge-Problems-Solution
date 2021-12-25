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
    char ch[100000];

    cin>>ch;

    int i, j, r = 0, d = 0;

    int n = strlen(ch);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j!=i)
                if(ch[i]==ch[j])
                {
                    d++;
                }
        }
    }

    r = n-(d/2);

    if(r%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
