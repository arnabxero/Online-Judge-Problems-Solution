///**************** Iftekhar Ahmed Arnab ****************///
///********** North East University Bangladesh **********///
///****************** ID: 190103020028 ******************///
///********************* 20th Batch *********************///
///**************** Session: Spring-2019 ****************///
///********* Current Semester : 4th(March, 2020) ********///
///************ Email : arnab.xero@gmail.com ************///

///Arnb

#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n, i, j, r = 0;

        cin>>n;

        int arr[n];

        for(i=0; i<n; i++)
            cin>>arr[i];

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(2<=(j-i) && arr[i]==arr[j])
                    r = 1;
            }
            if(r==1)
                break;
        }

        if(r==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}