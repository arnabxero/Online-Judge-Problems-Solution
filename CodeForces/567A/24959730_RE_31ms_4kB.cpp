#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int i, j, mn, mx;
    int arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<n; i++)
    {
        int *x = min_element(arr, arr+n);

        mn = abs(arr[*x]-arr[*x+1]);

        mx = 0;

        for(j=0; j<n; j++)
        {
            if(i==j)
                continue;;

            if(abs(arr[i]-arr[j])>mx)
                mx = abs(arr[i]-arr[j]);

            if(abs(arr[i]-arr[j])<mn)
                mn = abs(arr[i]-arr[j]);
        }
        cout<<mn<<" "<<mx<<endl;
    }
}
