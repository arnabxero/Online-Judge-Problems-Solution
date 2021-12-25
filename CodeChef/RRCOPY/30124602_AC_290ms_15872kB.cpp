#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n], i;

        for(i=0; i<n; i++)
            cin>>arr[i];

        int brr[n+1] = {0}, c = 0;

        for(i=0 ; i<n; i++)
        {
            brr[arr[i]]++;
        }
        for(i=0; i<n+1; i++)
        {
            if(brr[i]!=0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
