#include<bits/stdc++.h>

using namespace std;

struct db
{
    int point;
    int round;
};

bool cmp(struct db a, struct db b)
{
    return (a.round>b.round);
}

bool cmp2(struct db c, struct db d)
{
    return (c.point>d.point);
}

int main()
{
    int n, i, j, k;

    cin>>n;

    struct db card[n], card2[n];

    for(i=0; i<n; i++)
    {
        cin>>card[i].point;
        cin>>card[i].round;

        card2[i].point = card[i].point;
        card2[i].round = card[i].round;
    }

    sort(card, card+n, cmp);

    sort(card2, card2+n, cmp2);


    int c = 0;

    for(i=0; i<n; i++)
        c+=card[i].round;

    int t_round = 0;

    if(c>=(n-1))
        t_round = n-1;

    else t_round = c;

    int res = 0;

    for(i=0; i<=t_round; i++)
        {
            res += card2[i].point;
        }

    cout<<res<<endl;

}
