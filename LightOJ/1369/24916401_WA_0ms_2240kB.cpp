#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll int f(int A[], int n)   // n = size of A
{

    long long sum = 0;

    for( int i = 0; i < n; i++ )

        for( int j = i + 1; j < n; j++ )

            sum += A[i] - A[j];

    return sum;
}

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t, k;

    cin>>t;

    for(k=0; k<t; k++)
    {
        int n, q;

        cin>>n>>q;

        int i, arr[n];

        for(i=0; i<n; i++)
            cin>>arr[i];

        cout<<"Case "<<k<<":"<<endl;

        char ch[10];

        for(i=0; i<q; i++)
        {
            scanf(" %[^\n]s ", ch);

            if(ch[0]=='1')
            {
                ll int rslt = f(arr, n);
                cout<<rslt<<endl;
            }
            else
            {
                int xr = ch[2]-'0';
                int vr = ch[4]-'0';

                arr[xr] = vr;
            }
        }
    }
}
