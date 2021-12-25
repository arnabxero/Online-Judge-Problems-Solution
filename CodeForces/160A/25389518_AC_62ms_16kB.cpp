#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    return (a>b);
}

int main()
{
    int n, i;

    cin>>n;

    int arr[n];

    int sum1 = 0, sum2 = 0;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum1+=arr[i];
    }

    sort(arr, arr+n, cmp);

    int tmp;

    int c = 0;

    i=0;

    while(sum2<=sum1 && i<n)
    {
        sum1 = sum1-arr[i];
        sum2+=arr[i];
        i++;
        c++;
    }

    cout<<c<<endl;
}
