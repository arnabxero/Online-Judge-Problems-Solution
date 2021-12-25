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
    int t;

    cin>>t;

    while(t--)
    {
        int n, i, r = 1, tmp;

        cin>>n;

        int arr[n];

        for(i=0; i<n; i++)
            cin>>arr[i];

        sort(arr, arr+n);

        tmp = arr[0];

        for(i=1; i<n; i++)
        {
            if(arr[i]!=tmp)
            {
                tmp = arr[i];
                r++;
            }
        }

        cout<<r<<endl;
    }
}
