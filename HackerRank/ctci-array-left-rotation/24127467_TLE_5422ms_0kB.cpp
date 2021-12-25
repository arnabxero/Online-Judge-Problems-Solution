#include<bits/stdc++.h>

using namespace std;

void rot(int *p, int n)
{
    int i, f_tmp = p[0];

    for(i=0; i<n; i++)
    {
        if(i<(n-1))
            p[i] = p[i+1];
        else p[i] = f_tmp;
    }
}
int main ()
{
    int n, m, i;

    cin>>n>>m;

    int arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<m; i++)
        rot(arr, n);

    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";


}
