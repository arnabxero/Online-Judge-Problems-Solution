#include<bits/stdc++.h>

using namespace std;

struct db
{
    int match;
    int cont;
};

bool cmp(struct db a, struct db b)
{
    return (a.match>b.match);
}

int main()
{
    int n, m, i;

    cin>>n>>m;

    struct db arr[m+4];

    for(i=0; i<m; i++)
        cin>>arr[i].cont>>arr[i].match;

    sort(arr, arr+m, cmp);

    i = 0;
    int c = 0;

    while(n>0 && i<m && arr[i].cont>=0)
    {
        if((n-arr[i].cont)>0)
        {
            n-=arr[i].cont;
            c+=((arr[i].cont)*(arr[i].match));
            i++;
        }
        else
        {
            n--;
            c+=(arr[i].match);
            arr[i].cont--;

            if(arr[i].cont==0)
                i++;
        }
    }

    cout<<c<<endl;
}
