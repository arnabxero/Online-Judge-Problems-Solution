#include <bits/stdc++.h>
#define ll long long

using namespace std;

map<int, int> fa;
int n, t;

struct db
{
    ll cost;

    int data;

    bool operator<(const db &b) const
    {
        if(cost==b.cost)
            return data<b.data;

        else
            return cost>b.cost;
    }

};

struct db a[3000000];

int srch(int a)
{
    if (fa[a]==0)
        return a;

    else
        return fa[a]=srch(fa[a]);
}

void scl(int x, int y)
{
    x = srch(x);

    y = srch(y);

    if (x != y)
        fa[x] = y;
}

int main()
{
    cin >> n;

    fa.clear();

    int i;

    ll ans = 0;


    for(i=0; i<n; i++)
        scanf("%d", &a[i].data);

    for(i=0; i<n; i++)
        scanf("%lld", &a[i].cost);

    sort(a, a+n-1);

    for(i=0; i<n; i++)
    {
        int x=srch(a[i].data);

        ans+=a[i].cost*(x-a[i].data);

        scl(x,x+1);
    }

    cout<<ans<<endl;
}
