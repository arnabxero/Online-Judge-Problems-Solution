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
    int i, j, n, m;

    cin>>n;

    int ar1[n];

    for(i=0; i<n; i++)
        cin>>ar1[i];

    cin>>m;

    int ar2[m];

    for(i=0; i<m; i++)
        cin>>ar2[i];

    for(i=0; i<n; i++)
    {
        int r = 1;

        for(j=0; j<m; j++)
        {
            if(ar1[i]==ar2[j])
                r = 0;
        }
        if(r==1)
            cout<<ar1[i]<<" ";
    }
}
