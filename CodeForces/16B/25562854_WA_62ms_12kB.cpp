#include<bits/stdc++.h>

using namespace std;

struct db
{
    int c;
    int mc;
};

bool cmp(struct db a, struct db b)
{
    return (a.mc>b.mc);
}

int main()
{
    int n, m;

    cin>>n>>m;

    struct db arr[m];

    int i;

    for(i=0; i<m; i++)
        cin>>arr[i].c>>arr[i].mc;

    sort(arr, arr+m, cmp);

    int c = 0;

    i = 0;

    while((n-arr[i].c)>0)
    {
        n-=arr[i].c;
        c+=((arr[i].mc)*(arr[i].c));
        i++;
    }

    while(n>0)
    {
        c+=arr[i].mc;
        n-=1;
        arr[i].c--;

        if(arr[i].c<0)
            i++;
    }

    cout<<c<<endl;
}
