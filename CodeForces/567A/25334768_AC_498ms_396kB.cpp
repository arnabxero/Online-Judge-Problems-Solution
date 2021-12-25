#include<bits/stdc++.h>
#define a abs

//It was my Pre_Solved problem

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
        if(i==0)
        {
            cout<<abs(arr[0]-arr[1])<<" "<<abs(arr[0]-arr[n-1])<<endl;
            continue;
        }
        else if(i==(n-1))
        {
            cout<<abs(arr[n-1]-arr[n-2])<<" "<<abs(arr[n-1]-arr[0])<<endl;
            continue;
        }

        else
        {
            cout<<min(abs(arr[i]-arr[i+1]), abs(arr[i]-arr[i-1]))<<" "<<max(abs(arr[i]-arr[n-1]), abs(arr[i]-arr[0]))<<endl;
        }
    }
}