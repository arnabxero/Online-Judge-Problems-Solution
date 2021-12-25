#include<bits/stdc++.h>

using namespace std;

struct db
{
    int n;
    int c = 0;
};

int cntr(int *p, int n, int x)
{
    int i, c = 0;

    for(i=0; i<n; i++)
    {
        if(p[i]==x)
        {
            c++;
            p[i] = (-999987);
        }
    }
    return c;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[100000];
    int i = 0, j = 0, x, c = 0;

    while(scanf("%d", &x)!=EOF)
        arr[i++] = x;
    int n = i;

    for(i=0; i<n; i++)
    {
        c = 0;
        if(arr[i]!=(-999987))
        {
            x = arr[i];
            c = cntr(arr, n, arr[i]);
            printf("%d %d\n", x, c);
        }
    }

    return 0;
}
