#include<bits/stdc++.h>

using namespace std;

struct db
{
    int p;
    int r;
};

bool cmp(struct db a, struct db b)
{
    if(a.r==b.r)
        return (a.p>b.p);

    return (a.r>b.r);
}

int main()
{
    int n, i;

    cin>>n;

    struct db arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i].p;
        cin>>arr[i].r;
    }

    sort(arr, arr+n, cmp);

   /* for(i=0; i<n; i++)
    {
        cout<<arr[i].r;
        cout<<" "<<arr[i].p<<endl;
    } */

    int rounds = 1;
    int points = 0;
    i = 0;

    while(rounds>0 && i<n)
    {
        points += arr[i].p;
        rounds--;
        rounds += arr[i].r;
        i++;
    }

    cout<<points<<endl;
}
