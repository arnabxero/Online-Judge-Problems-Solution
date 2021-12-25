#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll int sum = 0;

void f(int arr[],int xr, int vr, int n)
{

    sum -= (n-1-xr)*arr[xr];

    sum += xr*arr[xr];

    arr[xr] = vr;

    sum += (n-1-xr)*arr[xr];

    sum -= xr*arr[xr];
}

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t, k;

    cin>>t;

    for(k=1; k<=t; k++)
    {
        ll int n, q;

        cin>>n>>q;

        ll int i;

        int arr[n];

        for(i=0; i<n; i++)
        {
            cin>>arr[i];

            sum += (n-1-i)*arr[i];

            sum -= i*arr[i];
        }


        cout<<"Case "<<k<<":"<<endl;

        char ch[10];

        for(i=0; i<q; i++)
        {
            scanf(" %[^\n]s ", ch);

            if(ch[0]=='1')
            {
                cout<<sum<<endl;
            }
            else
            {
                int xr = ch[2]-'0';
                int vr = ch[4]-'0';

                f(arr, xr, vr, n);
            }
        }
    }
}
